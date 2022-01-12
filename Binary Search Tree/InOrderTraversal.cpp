// InOrder Traversal Using Recursion
void InOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}
