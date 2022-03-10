// Mirror Of A Binary Tree
void swap(TreeNode* curr) {
        if(curr==NULL) return;
        swap(curr->left);
        swap(curr->right);
        TreeNode* temp;
        temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }
