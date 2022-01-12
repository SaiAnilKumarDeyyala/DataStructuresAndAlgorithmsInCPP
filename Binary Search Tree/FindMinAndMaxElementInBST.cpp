// Function to find the minimum element in the bst using iterative mode
int FindMin(BSTNode* root){
    if(root==NULL) return;
    BSTNode* temp = root;
    while(temp->left!=NULL) temp=temp->left;  
    return temp->data;
}

// Function to find the maximum element in the bst using iterative mode
int FindMax(BSTNode* root){
    if(root==NULL) return;
    BSTNode* temp = root;
    while(temp->right!=NULL) temp=temp->right;
    return temp->data;
}
