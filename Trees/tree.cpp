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

bool Search(tree* root,int data){
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
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


  int number;
  cout<<"Enter number be searched\n";
  cin>>number;
  if(Search(root,number) == true)  cout<<"Found\n";
  else cout<<"Not found\n";
 
return 0;
}