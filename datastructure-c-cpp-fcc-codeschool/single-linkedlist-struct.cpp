#include <iostream>
using namespace std;
void insert();
void insertAt();
void showNodes();

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;
Node *tail = NULL;

int main()
{
  int i = 1, input, choice;
  cout << "1.Append\n2.Insert(data, position)\n3.Show\n4.Exit\n";
  while (choice != 4)
  {
    cout << i << ". Enter enter choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      insert();
      break;
    case 2:
      insertAt();
      break;
    case 3:
      showNodes();
      break;
    case 4:
      cout << "Exit";
      exit(0);
      break;

    default:
      cout << "Invalid";
      exit(0);
    }
    i++;
  }
  return 0;
}

void insert()
{
  int _data;
  cout << "Enter Data : ";
  cin >> _data;
  Node *newNode = new Node;
  newNode->data = _data;
  newNode->next = NULL;
  head == NULL ? head = tail = newNode : tail->next = newNode;
  tail = newNode;
}
void insertAt()
{
  int data, position;
  cout << "Enter Data and position : ";
  cin >> data >> position;
  Node *newNode = new Node;
  Node *Temp = head;
  newNode->data = data;
  newNode->next = NULL;
  if (position <= 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  for (int i = 0; i < position - 2 && Temp->next != NULL; i++)
  {
    Temp = Temp->next;
  }
  if (Temp->next == NULL)
  {
    tail = newNode;
  }
  newNode->next = Temp->next;
  Temp->next = newNode;
}
void showNodes()
{
  Node *currentNode = head;
  cout << "List : ";
  while (currentNode != NULL)
  {
    cout << currentNode->data << " ";
    currentNode = currentNode->next;
  }
  cout << endl;
}
