package PACKAGE_PLACEHOLDER;

public class CLASS_NAME_PLACEHOLDER {
  /*
   * Declare native method here.
   */

  static {
    System.loadLibrary("CLASS_NAME_PLACEHOLDER");
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
  }
}
