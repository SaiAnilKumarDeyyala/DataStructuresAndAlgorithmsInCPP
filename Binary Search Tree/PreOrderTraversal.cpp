// PreOrder Traversal Using Recursion

void PreOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}


// PreOrder Traversal Using Iterative Method
vector<int> preorderTraversal(BSTNode* root) {
        vector<int> preorder;    
        if(root==NULL) return preorder;   

        stack<TreeNode*> st;        // stack to store the address of the nodes
        st.push(root);              
        
        while(!st.empty()) {       // while stack is not empty
            root = st.top();        
            st.pop();
            preorder.push_back(root->val);
            
            if(root->right!=NULL) {        // pushing the right child of the node in the stack
                st.push(root->right);
            }
            if(root->left != NULL) {      // pushing the left child of the node in the stack
                st.push(root->left);
            }
        }
    return preorder;
}
