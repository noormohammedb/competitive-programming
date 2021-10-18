/*
  Sum Of 2 Numbers Equals A Number

  Sum Of 2 numbers in an array equals a number
  find 2 numbers from the array
*/
public class sumOfTwoNumberEquals {
  public static void main(String[] args) {
    int[] myArray = { 4, 2, 6, 7, 4, 2, 3, 5, 7 };
    int sumNumber = 12;
    int[] numbers = findSumOfTwoNumberEquals(myArray, sumNumber);

    // System.out.print(numbers[0] + " " + numbers[1]);

    for (int num : numbers) {
      System.out.print(num + " ");
    }
  }

  public static int[] findSumOfTwoNumberEquals(int[] findArray, int number) {
    for (int i = 0; i < findArray.length - 1; i++) {
      for (int j = i + 1; j < findArray.length; j++) {
        if (findArray[i] + findArray[j] == number)
          return new int[] { findArray[i], findArray[j] };
      }
    }
    return new int[] {};
  }
}