// PreOrder Traversal Of Binary Tree

// using Recursion

void preorderr(TreeNode* root,vector<int> &vctr) {
        if(root==NULL) return;
        vctr.push_back(root->val);
        if(root->left) preorderr(root->left,vctr);
        if(root->right) preorderr(root->right,vctr);
    
}
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        preorderr(root,preorder);
        return preorder;
}


// using iterative method
vector<int> preorderTraversal(TreeNode* root) {
  vector<int> preorder;
  if(root==NULL) return preorder;
  stack<TreeNode*> st;
  st.push(root);
  while(!st.empty()) {
    root = st.top();
    st.pop();
    preorder.push_back(root->val);
    if(root->right) st.push(root->right);
    if(root->left) st.push(root->left);
  }
  return preorder;
}
