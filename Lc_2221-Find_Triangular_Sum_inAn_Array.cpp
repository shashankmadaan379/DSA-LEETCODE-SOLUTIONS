class Solution {
public:
    int triangularSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        while(nums.size()>1){
            vector<int> vec(nums.size()-1);
            for(int i=1;i<nums.size();i++){
                vec[i-1]=(nums[i]+nums[i-1])%10;
            }
             swap(vec,nums);
        }
        return nums[0];
    }
};
