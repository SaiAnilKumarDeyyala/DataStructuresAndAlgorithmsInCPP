// PostOrder Traversal Using Recursion
void PostOrderTraversal(BSTNode* root) {
    if(root==NULL) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}



// PostOrder Traversal Using Iterative Method
vector<int> postorderTraversal(BSTNode* root) {
        vector<int> postorder;  
        if(root==NULL) return postorder;   
        
        stack<BSTNode*> st1,st2;     // st1 is used to store the nodes to be visited and st2 is used to store the visited nodes
        st1.push(root);             
        while(!st1.empty()) {        
            root = st1.top();         
            st1.pop();               
            st2.push(root);          // Push the node to be visited to st2
            if(root->left!=NULL) {   // Push the left node to st1
                st1.push(root->left);
            }
            if(root->right!=NULL) {   // Push the right node to st1
                st1.push(root->right);
            }
        }
        
        while(!st2.empty()) {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        
        return postorder;
}
