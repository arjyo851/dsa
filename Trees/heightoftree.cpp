//heigth of the tree
#include<iostream>
using namespace std;
struct tree
{
    int data;
    tree* left;
    tree* right;    
};

tree* rootPtr;

tree* GetNewNode(int data){
    tree* newNode = new tree();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

tree* Insert(tree* root , int data){
    if(root == NULL){
    root = GetNewNode(data);
    }
    else if (data<=root->data)
    {
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    
return root;
}

int heightOfTree(tree* root){
    if (root == NULL)
    {
        return -1;
    }

    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
    
}

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


int main()
{ tree* root = NULL;
//Insert all the values of the binary search tree(yes you are commenting)
  root = Insert(root,15);
  root = Insert(root,10);
  root =Insert(root,20);
  root = Insert(root,25);
  root = Insert(root,8);
  root = Insert(root,12);


 
  
   cout<<heightOfTree(root);
 
return 0;
}