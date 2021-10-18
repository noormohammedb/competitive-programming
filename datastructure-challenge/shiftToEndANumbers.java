/*
  shift given number to end of the array

*/
public class shiftToEndANumbers {
  public static void main(String[] args) {
    int[] numbers = { 4, 9, 5, 9, 2, 3, 4, 9, 1, 4, 3, 5, 9, 4, 4, 5, 4, 2 };
    int targetNum = 4;

    System.out.println("Array Before Shifting : ");
    for (int i : numbers)
      System.out.print(i + " ");

    shiftToEndANumbers obj = new shiftToEndANumbers();
    obj.shiftNumbers(numbers, targetNum);

    System.out.println("\nArray After Shifting : ");
    for (int i : numbers)
      System.out.print(i + " ");
  }

  public void shiftNumbers(int[] myArray, int targetNum) {
    for (int i = 0, j = myArray.length - 1; i < j; i++) {
      for (; myArray[j] == targetNum; j--)
        ;
      if (myArray[i] == targetNum) {
        int temp = myArray[j];
        myArray[j] = myArray[i];
        myArray[i] = temp;
      }
    }
  }
}