class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(false);
        if(s.size()==0)return 0;
        int left=0,right=0,res=1;
        int arr[256]={};
        arr[s[0]]++;
        while(right<s.size()-1){
            if(arr[s[right+1]]==0){
                right++;
                arr[s[right]]++;
            }
            else{
                arr[s[left]]--;
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};