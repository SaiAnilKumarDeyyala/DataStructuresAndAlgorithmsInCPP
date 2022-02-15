// inorder Traversal Of Binary Tree

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
