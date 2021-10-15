/*
  Quick Sort
  Partitioning Array
  Divide and conquer technique
*/

#include <iostream>
// #define arLeng 6
#define arLeng 12
using namespace std;
void printArray();
void swapArray(int left, int right);
void quickSort(int left, int right);
// int myArray[arLeng] = {6, 5, 8, 1, 12, 7};
int myArray[arLeng] = {3, 2, 1, 4, -9, 0, 0, 12, 7, 2, 39, 5};
// int myArray[arLeng] = {5, 8, 4, 6};
int main()
{
  quickSort(0, arLeng - 1);
  // cout << "\nLeft : " << left << endl;
  cout << "\nAfter loop";
  printArray();
  return 0;
}
void quickSort(int left, int right)
{
  int trueLeft = left, trueRight = right, pivotIndex = left;
  while (right > left)
  {
    while (myArray[pivotIndex] < myArray[right] && right > left)
    {
      right--;
    }
    cout << "\nloop-Right : " << right << endl;
    while (myArray[pivotIndex] >= myArray[left] && right > left)
    {
      left++;
    }
    cout << "\nloop-Left : " << left << endl;
    cout << "\nBefore Swap";
    printArray();
    if (right > left)
    {
      cout << "\nleft right swap";
      swapArray(left, right);
    }
    else
    {
      cout << "\npivot left swap";
      swapArray(pivotIndex, left);
      printArray();
      // if (trueRight != trueLeft)
      if (trueRight > trueLeft)
      {
        //   if (trueLeft > left - 1)
        //   {
        quickSort(trueLeft, left - 1);
        // }
        // if (left + 1 < trueRight)
        // {
        quickSort(left + 1, trueRight);
        // }
      }
      else
        return;
    }
    cout << "\nend of a iteration";
    printArray();
  }
  return;
}

void printArray()
{
  cout << endl;
  for (int i = 0; i < arLeng; i++)
  {
    cout << myArray[i] << " ";
  }
  cout << endl;
}
void swapArray(int left, int right)
{
  int temp;
  temp = myArray[left];
  myArray[left] = myArray[right];
  myArray[right] = temp;
}