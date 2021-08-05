#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* next;
Node* prev;
Node (int val){
  data = val;
  next = NULL;
  prev = NULL;
}
};

void insertAtHead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->data = val;
    new_node->next = head;
    if (head!=NULL)
    {
        head->prev = new_node;
    }
    
    
    head = new_node;
}

void insertAtTail(Node* &head,int val){
    if(head == NULL){
        insertAtHead(head,val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while (temp->next = NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
    

}

int main()
{
 
return 0;
}