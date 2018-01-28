package recipeNo009;

public class PassString {
  public static native void displayString(java.lang.String value);

  static {
    System.loadLibrary("PassString");
  }

  public static void main(String[] args) {
    System.out.println("library: "
              + System.getProperty("java.library.path"));
     
    java.lang.String strHello = "Hello";
    java.lang.String strWorld = "World";

    PassString.displayString(strHello);
    PassString.displayString(strWorld);
  }
}
