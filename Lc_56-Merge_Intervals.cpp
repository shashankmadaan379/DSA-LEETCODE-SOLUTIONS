class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> vec;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(vec.empty()){
                vec.push_back(intervals[i]);
            }
            else{
                vector<int> &temp=vec.back();
                int end=temp[1];
                //overlapping
                if(intervals[i][0]<=end){
                    temp[1]=max(temp[1],intervals[i][1]);
                }
                //non-overlapping
                else{
                    vec.push_back(intervals[i]);
                }
            }
        }
        return vec;
    }
};
