// inorder Traversal Of Binary Tree

// recursive method
void inorder(TreeNode* root,vector<int> &v) {
        if(root==NULL) return;
        if(root->left) inorder(root->left,v);
        v.push_back(root->val);
        if(root->right) inorder(root->right,v);
}
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> iorder;
        if(root==NULL) return iorder;
        inorder(root,iorder);
        return iorder;
 }


// Iterative method

vector<int> inorderTraversal(TreeNode* root) {
  vector<int> inorder;
  if(root==NULL) return inorder;
  stack<TreeNode*> st;
  TreeNode* node = root;
  
  while(true) {
    if(node!=NULL) {
      st.push(node);
      node = node->left;     //go to the leftmost node
    }
    else {                
      if(st.empty()) break; 
      node = st.top();       // if left most node is reached then pop the stack
      st.pop();
      inorder.push_back(node->val);
      node = node->right;    // Go to the right node of the popped node
    }
  }
  return inorder;
}
