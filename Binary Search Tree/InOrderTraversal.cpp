// InOrder Traversal Using Recursion
void InOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}


// InOrder Traversal Using Iterative Method
vector<int> inorderTraversal(BSTNode* root) {
    stack<BSTNode*> s;
    vector<int> inorder;
    BSTNode* node = root;

    while(true) {
        if(node!=NULL) {            // Push all the left nodes to the stack  
            st.push(node);      
            node = node->left;      // Go to the left most node
        }
        else {                       // if left most node is reached then pop the stack
            if(s.empty()) break;     // If stack is empty, then break
            node = s.top();          
            s.pop();
            inorder.push_back(node->data);   
            node = node->right;         // Go to the right node of the popped node
        }
    }
    return inorder;
}
