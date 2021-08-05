#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
};

bool bstUtil(Node* root,int min,int max){
    if(root == NULL) return true;

    if(root->data > min && root->data<max && bstUtil(root->left,min,root->data) && bstUtil(root->right,root->data,max)){
        return true;
    }
    else{
        return false;
    }
}

bool isBinarySearchTree(Node* root){
    return bstUtil(root,INT_MIN,INT_MAX);
}

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{ Node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
 
 if(isBinarySearchTree(root))
        cout<<"Is BST";
    else
        cout<<"Not a BST";
return 0;
}