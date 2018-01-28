package recipeNo010;

public class ReturnString {
  /*
   * Declare native method here.
   */
  public static native java.lang.String getString();

  static {
    System.loadLibrary("ReturnString");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
     *         LD_LIBRARY_PATH is correctly set
     *             */
    System.out.println("library: "
        + System.getProperty("java.library.path"));

    /*
     * Add your own code.
     */
    java.lang.String str = null;
    str = ReturnString.getString();
    System.out.println("String from c: " + str);
  }
}
