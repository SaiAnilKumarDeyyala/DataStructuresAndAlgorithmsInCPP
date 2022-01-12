// PostOrder Traversal Using Recursion

void PostOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}
