class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*
        
        //Bruteforce--sorting--O(NLOGN)---> Not Allowed
        sort(nums.begin(),nums.end());
        ios_base::sync_with_stdio(false);
        int temp=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 and nums[i]>temp)
                return temp;
            else if(nums[i]==temp)
                temp++;
        }
        return temp;
        
        */
        
        /*
        //Using set TC-->ON(N) AND SPCAE-->O(N)--Not Allowed
        set<int> s(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return s.size()+1;
        
        */
        
        
        //TC--O(N) AND CONSTANT SPACE
        ios_base::sync_with_stdio(false);
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0 and nums[i]<=nums.size() and nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1)
                return i+1;
        }
        return nums.size()+1;
        
    }
};