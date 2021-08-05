bool IsSubtreeGreater(tree* root){
     if(root == NULL ) return true;
   if(root->data > value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value)){
       return true;
   }
   else{
       return false;
   }
}