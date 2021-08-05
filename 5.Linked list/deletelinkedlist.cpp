#include<bits/stdc++.h>
using namespace std;

class node
{ public:
  int data;
  node *next;
};

void push (node ** head, int val)
{
  node *new_node = new node ();
  new_node->data = val;
  new_node->next = *head;
  *head = new_node;
}

void deleteLL(node** head){
    node* current = *head;
    node* next = NULL;
    
    while(current != NULL){
        next = current->next;
        delete current;
        current = next;
    }
    *head=NULL;
}

void printLL(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    push(&head,13);
    push(&head,15);
    push(&head,67);
    
    printLL(head);
    deleteLL(&head);
    printLL(head);
    return 0;
}
