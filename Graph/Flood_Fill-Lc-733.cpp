class Solution {
public:
    
   void dfs(vector<vector<int>>& image,int i,int j,int m,int n,int currcolor,int newcolor){
            if(i<0 or i>=m or j<0 or j>=n or image[i][j]==newcolor or image[i][j]!= currcolor)
                return;
        image[i][j]=newcolor;
        dfs(image,i+1,j,m,n,currcolor,newcolor);
        dfs(image,i,j+1,m,n,currcolor,newcolor);
        dfs(image,i-1,j,m,n,currcolor,newcolor);
        dfs(image,i,j-1,m,n,currcolor,newcolor);
        
        
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        //using depth-first-search
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int m=image.size();
        int n=image[0].size();
        int currcolor=image[sr][sc];
        dfs(image,sr,sc,m,n,currcolor,newColor);
        return image;
        
        
    }
        
    
};
