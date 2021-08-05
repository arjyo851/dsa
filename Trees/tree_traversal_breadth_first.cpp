//breadth first traversal
#include<bits/stdc++.h>
using namespace std;
class node
{    
public:
    int data;
    node* left;
    node* right;
};

void printLevelOrder(node* root){
    if(root == NULL) return;

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data;
        
        if(temp->left != NULL){
            q.push(temp->left);
        }

        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }

        q.pop();
        

    }
    
}


node* newNode(int data){
    node* temp = new node;
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}
int main()
{
 node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
return 0;
}