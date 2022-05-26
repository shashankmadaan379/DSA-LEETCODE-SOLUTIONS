#define mod  1000000007;;
class Solution {
public:
    int countTexts(string k) {
        int size=k.size();
        vector<long> dp(size+1,0);
        dp[0]=1;
        for(int i=1;i<=size;i++){
            char c=k[i-1];
            dp[i]=(dp[i-1]);
            if((i)>=2 && k[i-2]==c){
                dp[i] = (dp[i] + dp[i-2]) % mod;}
			else continue;

			if((i)>=3 && k[i-3]==c){
                dp[i]= ( dp[i]+dp[i-3] )  % mod;}
			else continue;

			if( (c=='7' || c=='9') && (i)>=4 && k[i-4]==c) dp[i]=(dp[i]+dp[i-4] )% mod;
        }
        return (int)dp[size]%mod;
    }
};