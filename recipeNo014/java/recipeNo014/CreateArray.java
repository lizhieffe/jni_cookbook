package recipeNo014;

public class CreateArray {
  /*
   * Declare native method here.
   */
  public static native boolean[] createBooleanArray(int size);
  public static final int arraySize = 5;

  static {
    System.loadLibrary("CreateArray");
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
    boolean[] boolArray = createBooleanArray(arraySize);
    for (int i = 0; i < boolArray.length; i++) {
      System.out.println("boolArray[" + i + "] = " + boolArray[i]);
    }
  }
}
