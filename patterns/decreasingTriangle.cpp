#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter Triangle Size: ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    for (int j = i; j < size; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
