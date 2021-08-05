#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct Node* root){
    if(root != NULL){
        inorder(root ->left);
        cout<<root->data;
        inorder(root->right);
    }
}

Node* insert(Node* node,int key){
    if(root == NULL) return newNode(key);

    if(key < node->data){
        node->left = insert(node->left,key);
    }
    else{
        node->right = insert(node->right,key);
    }

    return node;
    
}

Node* Findmin(Node* node){
 Node* current = node;
 while (current && current->left != NULL){
     current = current->left;
 }
 return current;
}

Node* deleteNode(Node* root, int key){

}



int main()
{
 
return 0;
}