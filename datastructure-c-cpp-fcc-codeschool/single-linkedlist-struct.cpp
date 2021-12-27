#include <iostream>
using namespace std;
void insert(int data);
void showNodes();

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

int main()
{
  int count, input;
  cout << "enter no. of list : ";
  cin >> count;
  for (int i = 0; i < count; i++)
  {
    cout << i + 1 << ". Enter no : ";
    cin >> input;
    insert(input);
    showNodes();
  }
  return 0;
}

void insert(int _data)
{
  Node *newNode = new Node;
  newNode->data = _data;
  newNode->next = head;
  head = newNode;
}
void showNodes()
{
  Node *currentNode = head;
  cout << "nodes : ";
  while (currentNode != NULL)
  {
    cout << currentNode->data << " ";
    currentNode = currentNode->next;
  }
  cout << endl;
}
