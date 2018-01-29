#include "recipeNo015_SigSegv.h"
#include "recipeNo015_SigSegvNoHandler.h"

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

jmp_buf ljenv;

// Stores the old handlers to be replaced.
// 
// OS X uses SIGBUS in case of accessing incorrect memory region
// Linux will use SIGSEGV - this is why we should use two handlers
// there are 31 possible signals we can handle
struct sigaction actions[31];

// Set handler for a signal.
void setup_signal_handler(int sig, void (*handler)( ), struct sigaction *old) {
  struct sigaction action;

  // Fill action structure.
  action.sa_handler = handler;

  // signal set is used to specify what signals are affected (handled by  a handler).
  // Initialise and empty a signal set.
  sigemptyset(&(action.sa_mask));
  // Add a signal to a signal set.
  sigaddset(&(action.sa_mask), sig);

  // you can bring back original signal using
  // SA_RESETHAND passed inside sa_flags
  action.sa_flags = 0;

  // and set new handler for signal
  sigaction(sig, &action, &actions[sig - 1]);
}

// This function will be called whenever signal occurs.
void handler(int handle) {
    // be very condense here
    // just do essential stuff and get
    // back to the place you want to be
    write(STDOUT_FILENO, "Hello from handler\n", strlen("Hello from handler\n"));
    // set original signal handler
    sigaction(handle, &actions[handle - 1], NULL);
    // and jump to where we have set long jump
    siglongjmp(ljenv, 1);
}

// the purpose of this code is to generate SIGSEGV/SIGBUS
void riskyCode() {
  char *error_str = "This code will fail with SIGSEGV";
  *error_str = 'g';
}

JNIEXPORT void JNICALL
Java_recipeNo015_SigSegv_callRiskyCode(JNIEnv *env, jclass obj) {
  // setup signal handlers 
  // signals are counted from 1 - 31. Array indexes are
  // counted from 0 - 30. This is why we do 10-1 and 11-1
  setup_signal_handler(10, handler, &actions[10 - 1]);
  setup_signal_handler(11, handler, &actions[11 - 1]);

  if (// set jump point for a non-local goto. It saves the calling env in its
      // env argument for later use by siglongjmp(). If the return is from a
      // successful direct invocation, sigsetjmp() returns 0. If the return is
      // from a call to siglongjmp(), sigsetjmp() returns a non-zero value.
      sigsetjmp(ljenv, 1) == 0) {
    riskyCode();
  } else {
    char exceptionBuffer[1024];
    sprintf(exceptionBuffer, "Error from C");
    (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/Exception"),
        exceptionBuffer);
  }

  sigaction(10, &actions[10 - 1], NULL);
  sigaction(11, &actions[11 - 1], NULL);
}

// No handler set. JVM will crash.
JNIEXPORT void JNICALL
Java_recipeNo015_SigSegvNoHandler_callRiskyCodeNoHandler(JNIEnv *env, jclass obj) {
  // We are calling risky code, but we don't set SIGBUS/SIGSEGV handler.
  riskyCode();
}
