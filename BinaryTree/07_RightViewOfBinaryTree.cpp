// Right View Of Binary Tree Using Recursion

 void recursion(TreeNode* root,int level,vector<int>& rview) {
        if(root==NULL) return;
        if(rview.size()==level) rview.push_back(root->val);
        
        recursion(root->right,level+1,rview);
        recursion(root->left,level+1,rview);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rview;
        recursion(root,0,rview);
        return rview;
    }
