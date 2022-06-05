class Solution {
public:
    int minDifference(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        if(nums.size()<=4)
            return 0;
        int miny=INT_MAX;
        for(int i=1;i<=4;i++){
            miny=min(miny,nums[nums.size()-i]-nums[4-i]);
        }
        return miny;
    }
};
