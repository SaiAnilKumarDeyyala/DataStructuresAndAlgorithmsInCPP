// PreOrder Traversal Using Recursion

void PreOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
