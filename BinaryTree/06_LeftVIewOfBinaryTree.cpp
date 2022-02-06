// Left View Of Binary Tree Using Recursion

void recursion(Node* root,int level,vector<int>& lview) {
  if(root==NULL) return;
  
  if(lview.size()==level) lview.push_back(root->data);     // push the first node in the level to the data structure
  recursion(root->left,level+1,lview);                     // iterating to left node in the next level
  recursion(root->right,level+1,lview);
}

vector<int> leftView(Node* root) {
  vector<int> lview;
  recursion(root,0,lview);
  return lview;
}
