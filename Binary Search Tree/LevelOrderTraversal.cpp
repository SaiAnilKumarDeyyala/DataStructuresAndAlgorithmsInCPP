void levelOrderTraversal(BSTNode* root) {
    queue<BSTNode*> Q;
    Q.push(root);
  
    while(!Q.empty()) {
        BSTNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right!= NULL) Q.push(current->right);
        Q.pop();
    }
}
