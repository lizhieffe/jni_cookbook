package recipeNo015;

public class SigSegvNoHandler {
  /*
   * Declare native method here.
   */
  public static native void callRiskyCodeNoHandler();

  static {
    System.loadLibrary("SigSegv");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
     *         LD_LIBRARY_PATH is correctly set
     */
    System.out.println("library: "
        + System.getProperty("java.library.path"));

    /*
     * Add your own code.
     */
    try {
      SigSegvNoHandler.callRiskyCodeNoHandler();
    } catch (Exception e) {
      System.out.println("Call to callRiskyCodeNoHandler() finished with exception: "
          + e.toString());
    }
  }
}
