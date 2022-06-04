class Solution {
public:
    bool dfs(int source,int destination, vector<vector<int>> &adj, vector<bool> &vis){
        
        if(source==destination)
            return true;
        vis[source]=1;
        for(auto it:adj[source]){
            if(vis[it]==0){
                if(dfs(it,destination,adj,vis))return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(dfs(source,destination,adj,vis))
                    return true;
            }
        }
        return false;
    }
};
