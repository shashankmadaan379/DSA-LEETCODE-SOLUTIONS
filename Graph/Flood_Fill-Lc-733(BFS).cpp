class Solution {
public:
    bool checkBoundary(vector<vector<int>>& image,int i,int j){
        return i>=0 and i<image.size() and j>=0 and j<image[0].size();
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //using breadth-first-search(BFS)
        if(image[sr][sc]==newColor)
            return image;
        int currcolor=image[sr][sc];
        int xdir[4]={0,-1,0,1};
        int ydir[4]={-1,0,1,0};
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            pair<int,int> temp=q.front();
            q.pop();
            image[temp.first][temp.second]=newColor;
            for(int i=0;i<4;i++){
                pair<int,int> nextpair(temp.first+xdir[i],temp.second+ydir[i]);
                if(checkBoundary(image,nextpair.first,nextpair.second) and image[nextpair.first][nextpair.second]==currcolor){
                    q.push(nextpair);
                }
            }
        }
        return image;
    }
};
