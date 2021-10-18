/*
  merge sort

  debugged using vscode cpp debugger
*/
#include <iostream>
using namespace std;

// #define arLeng 4
// int myAr[arLeng] = {9, 3, 5, 1};
// #define arLeng 9
// int myAr[arLeng] = {9, 4, 3, 2, 1, 9, 3, 5, 1};
#define arLeng 13
int myAr[arLeng] = {7, 1, -8, 9, 4, 2, 15, 4, 10, 3, -1, 9, 0};

void mergeSort(int lower, int upper);
void merge(int low, int mid, int upper);
void printArray(int arr[]);

int main()
{
  cout << "Array Before Sort";
  printArray(myAr);
  mergeSort(0, arLeng - 1);

  cout << "\nArray After Sort";
  printArray(myAr);

  return 0;
}

void mergeSort(int lower, int upper)
{
  if (lower < upper)
  {
    // cout << "\nlower: " << lower << " upper: " << upper;
    int middle = (lower + upper) / 2;
    mergeSort(lower, middle);
    mergeSort(middle + 1, upper);
    merge(lower, middle, upper);
  }
}

void merge(int low, int mid, int upper)
{
  int start = low, startTwo = mid + 1, newArIndex = low, sortedArray[arLeng];
  // cout << "\nnewArIndex : " << newArIndex;
  while (start <= mid && startTwo <= upper)
  {
    if (myAr[start] < myAr[startTwo])
    {
      sortedArray[newArIndex] = myAr[start];
      start++;
    }
    else
    {
      sortedArray[newArIndex] = myAr[startTwo];
      startTwo++;
    }
    newArIndex++;
  }
  for (; start <= mid; newArIndex++, start++)
    sortedArray[newArIndex] = myAr[start];
  // while (start <= mid)
  // {
  //   sortedArray[newArIndex] = myAr[start];
  //   newArIndex++;
  //   start++;
  // }

  for (; startTwo <= upper; newArIndex++, startTwo++)
    sortedArray[newArIndex] = myAr[startTwo];
  // while (startTwo <= upper)
  // {
  //   sortedArray[newArIndex] = myAr[startTwo];
  //   newArIndex++;
  //   startTwo++;
  // }
  for (int i = low; i <= upper; i++)
    myAr[i] = sortedArray[i];
}

void printArray(int arr[])
{
  cout << endl;
  for (int i = 0; i < arLeng; i++)
    cout << arr[i] << " ";
  cout << endl;
}