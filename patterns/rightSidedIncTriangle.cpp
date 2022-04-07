#include <iostream>
using namespace std;

int main()
{
  int countFromUser = 3, i, j, k;
  // cout << "Enter triangle size: ";
  // cin >> countFromUser;
  for (i = 1; i <= countFromUser; i++)
  {
    for (j = i; j < countFromUser; j++)
    {
      cout << " ";
    }
    for (k = 0; k < i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}