class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        for(int i=0;i<intervals.size();i++){
            if(res.empty())
                res.push_back(intervals[i]);
            else{
                vector<int> &temp=res.back();
                int end=temp[1];
                if(intervals[i][0]<=end){
                    temp[1]=max(temp[1],intervals[i][1]);
                }
                else{
                    res.push_back(intervals[i]);
                }
            }
            
        }
        return res;
    }
};
