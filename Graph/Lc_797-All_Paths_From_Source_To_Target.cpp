class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<vector<int>>& graph,vector<int> &path,int curr){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        path.push_back(curr);
        if(curr==graph.size()-1){
            res.push_back(path);
        }
        else{
            for(auto it:graph[curr]){
                dfs(graph,path,it);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
          vector<int> path;
         dfs(graph,path,0);
        return res;
        
    }
};
