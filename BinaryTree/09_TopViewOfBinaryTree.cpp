// Top View Of Binary Tree

vector<int> topView(Node* root) {
  vector<int> tview;
  if(root==NULL) return tview;
  
  map<int,int> mp;
  queue<pair<Node*,int>> q;
  q.push({root,0});
  
  while(!q.empty()) {
    auto it = q.front();
    q.pop();
    int line = it.second;
    Node* node = it.first;
    if(mp.find(line)==mp.end()) mp[line] = node->data;
    
    if(node->left) q.push({node->left,line-1});
    if(node->right) q.push({node->right,line+1});
  }
  
  for(auto it:mp) {
    tview.push_back(it.second);
  }
  return tview;
}
