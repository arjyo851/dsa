#include<iostream>
using namespace std;

class Node
{public:
    int data;
    Node* left;
    Node* right;
};

void printInorder(Node* node){//ldr
    if(node == NULL) return;

    printInorder(node->left);
    cout<<node->data;
    printInorder(node->right);
}

void printPostorder(Node* node){//lrd
    if(node == NULL) return;

    printInorder(node->left);
    printInorder(node->right);
    cout<<node->data;
}

void printPreorder(Node* node){//dlr
    if(node == NULL) return;

    cout<<node->data;
    printInorder(node->left);
    printInorder(node->right);
}

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}


int main(){
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
 
    return 0;
}