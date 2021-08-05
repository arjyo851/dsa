#include<iostream>
using namespace std;
struct bst
{
    int data;
    bst* left;
    bst* right;
};

bst* root;
bst* GetNewNode(int data){
    bst* newNode = new bst();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bst* Insert(bst* root,int data){
    if(root == NULL) {
       root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

int findMin(bst* root){
    if (root == NULL)
    {
        cout<<"Error:Tree is empty\n";
        return -1;
    }
    
    bst* current = root;
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current->data;
}

int findMax(bst* root){
    if (root == NULL)
    {
        cout<<"Error:Tree is empty\n";
        return -1;
    }
    bst* current = root;
    while (current->right != NULL)
    {
        current = current->right;
    }
    return current->data;
}
int main()
{
  bst* root = NULL;
  int x,n;
  cout<<"Enter the number of elements you want in the tree:";
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      cin>>x;
      root = Insert(root,x);
  }
  
  

  cout<<"\nThe maximum element is:";
  cout<<findMax(root);
  cout<<"\nThe minimum elemnt is:";
  cout<<findMin(root);
  
return 0;
}