#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
};

void push(node **head_ref, int val)
{
  node *new_node = new node();
  new_node->data = val;
  new_node->next = (*head_ref);
  *head_ref = new_node;
}

void printLL(node *head)
{
  while (head != NULL)
  {
    cout << head->data << "->";
    head = head->next;
  }

  cout << "0";
  cout << endl;
}

void deleteNode(node **head_ref, int val)
{
  node *temp = *head_ref;
  node *prev = NULL;

  if (temp != NULL && temp->data == val)
  {
    *head_ref = temp->next;
    delete temp;
    return;
  }
  else
  {
    while (temp != NULL && temp->data != val)
    {
      prev = temp;
      temp = temp->next;
    }
    if (temp == NULL)
    {
      return;
    }

    prev->next = temp->next;
    delete temp;
  }
}

int main()
{
  node *head;
  push(&head, 8);
  push(&head, 10);
  push(&head, 15);
  printLL(head);
  deleteNode(&head, 10);
  printLL(head);
}
