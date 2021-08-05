#include<iostream>
using namespace std;
class tree
{ public:
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
bool IsSubtreeLesser(tree* root,int value){
   if(root == NULL ) return true;
   if(root->data <= value && IsSubtreeLesser(root->left,value) && IsSubtreeLesser(root->right,value)){
       return true;
   }
   else{
       return false;
   }
}

bool IsSubtreeGreater(tree* root,int value){
     if(root == NULL ) return true;
   if(root->data > value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value)){
       return true;
   }
   else{
       return false;
   }
}
bool IsBinarySearchTree(tree* root){
    if(root == NULL)  return true;
    if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->right,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)){
        return true;
    }
    else{
        return false;
    }
}



int main()
{ tree* root = NULL;
//Insert all the values of the binary search tree(yes you are commenting)
  root = Insert(root,15);
  root = Insert(root,10);
  root =Insert(root,2);
  root = Insert(root,25);
  root = Insert(root,800);
  root = Insert(root,12);


 cout<<IsBinarySearchTree(root);
 
return 0;
}