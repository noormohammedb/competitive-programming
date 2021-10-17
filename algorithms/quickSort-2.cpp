/*
  quick sort formal algorithem - 2
*/

#include <iostream>
#define arLen 13
// #define arLen 8
using namespace std;

void quickSort(int left, int right);
int partiotion(int start, int stop);
void arSwap(int left, int right);
void printArray();

int myAr[arLen] = {7, 1, -8, 9, 4, 2, 15, 4, 10, 3, -1, 9, 2};
// int myAr[arLen] = {7, 1, 9, 4, 15, 3, 9, 2};

int main()
{
  cout << "before sort\n";
  printArray();
  quickSort(0, arLen - 1);
  cout << "\nafter sort\n";
  printArray();

  return 0;
}

void quickSort(int left, int right)
{
  if (left < right)
  {
    int sortedPosition = partiotion(left, right);
    quickSort(left, sortedPosition - 1);
    quickSort(sortedPosition + 1, right);
  }
}

int partiotion(int start, int stop)
{
  // int pivotIndex = (start + stop) / 2, left = start, right = stop;
  int pivotIndex = start, left = start, right = stop;
  while (left < right)
  {
    for (; myAr[left] < myAr[pivotIndex]; left++)
      ;
    for (; myAr[right] >= myAr[pivotIndex]; right--)
      ;
    if (left <= right)
    {
      // cout << "\nleft-right";
      arSwap(left, right);
    }
  }
  // cout << "\nleft-pivot";
  arSwap(left, pivotIndex);
  return left;
  // arSwap(start, right);
  // return right;
}

void arSwap(int left, int right)
{
  // cout << "\nswap : " << left << ", right : " << right << endl;
  int temp = myAr[left];
  myAr[left] = myAr[right];
  myAr[right] = temp;
}
void printArray()
{
  for (int i = 0; i < arLen; i++)
  {
    cout << myAr[i] << ' ';
  }
}