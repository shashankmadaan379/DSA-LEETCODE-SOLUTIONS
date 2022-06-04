vector<int> bfs(int v , vector<int>adj[]){
  vector<int> ans;
  vector<int> vis(v,0);
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int curr=q.front();
    q.pop();
    vis[curr]=1;
    ans.push_back(curr);
    for(auto it:adj[curr]){
      if(vis[it]==0){
        vis[it]=1;
        q.push(it);
      }
    }
  }
  return ans;
}
