/*
	Quick Sort
	Partitioning Array
	Divide and conquer technique
	*/

#include <iostream>
#define arLeng 13
using namespace std;

void printArray();
void swapArray(int left, int right);
void quickSort(int left, int right);

int myArray[arLeng] = {7, 1, -8, 9, 4, 2, 15, 4, 10, 3, -1, 9, 0};

int main()
{
  cout << "\nBefore Sort ";
  printArray();
  quickSort(0, arLeng - 1);
  cout << "\nAfter Sort ";
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
    while (myArray[pivotIndex] >= myArray[left] && right > left)
    {
      left++;
    }
    if (right > left)
    {
      swapArray(left, right);
    }
    else
    {
      swapArray(pivotIndex, left);
      if (trueRight > trueLeft)
      {
        quickSort(trueLeft, left - 1);
        quickSort(left + 1, trueRight);
      }
    }
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
