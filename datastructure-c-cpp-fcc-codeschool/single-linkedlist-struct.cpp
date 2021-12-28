#include <iostream>
using namespace std;
void insert();
void insertAt();
void deleteAt();
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
  cout << "1.Append\n2.Insert(data, position)\n3.Show\n4.Delete (position)\n5.Exit\n";
  while (choice != 5)
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
      deleteAt();
      break;
    case 5:
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
    newNode->next = NULL;
  }
  newNode->next = Temp->next;
  Temp->next = newNode;
}
void deleteAt()
{
  int position, i;
  Node *temp, *iteration = head, *current = iteration->next;
  cout << "enter position to delete : ";
  cin >> position;
  if (position <= 1)
  {
    current = head;
    head = head->next;
    delete current;
    return;
  }

  for (i = 0; i < position - 2 && current->next != NULL; i++)
  {
    iteration = iteration->next;
    current = iteration->next;
  }
  if (current->next == NULL)
  {
    tail = iteration;
    iteration->next = NULL;
  }

  iteration->next = current->next;
  delete current;
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
