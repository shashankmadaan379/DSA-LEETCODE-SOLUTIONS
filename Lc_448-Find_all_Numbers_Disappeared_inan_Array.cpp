class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //using set--TC->O(N) AND SC-->O(N)
        /*
        set<int> s(nums.begin(),nums.end());
        vector<int> res;
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end())res.push_back(i);
        }
        return res;
        */
        
        
        
        /*
        
        //using set--TC->O(N) AND SC-->O(N)
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=1;i<=nums.size();i++){
            mp[i]=0;
        }
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second==0){
                res.push_back(it.first);
            }
        }
        return res;
        */
        
        
    //TC-O(N) AND CONSTANT SPACE
    int n(nums.size());
    for(int i(0);i<n;i++)
        nums[abs(nums[i])-1]=abs(nums[abs(nums[i])-1])*-1;
    
    vector<int> result;
    for(int i(0);i<n;i++)
        if(nums[i]>0)
            result.push_back(i+1);
        
    return result;
    }
};