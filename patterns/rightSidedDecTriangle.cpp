#include <iostream>
using namespace std;
int main()
{
  int size = 7, i, j, k;

  for (i = 1; i <= size; i++)
  {
    for (j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (k = i; k <= size; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
