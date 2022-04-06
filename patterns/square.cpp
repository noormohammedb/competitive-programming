#include <iostream>
using namespace std;

int main()
{
  int countFromUser;

  cout << "Enter Square size: ";
  cin >> countFromUser;

  for (int i = 0; i < countFromUser; i++)
  {
    for (int j = 0; j < countFromUser; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}