class Solution {
public:
    int trap(vector<int>& h) {
        //Bruteforce ----> gives TLE ---> O(N^2)
        
        /*
        int count=0;
        for(int i=0;i<h.size();i++){
            int left_max=h[i];
            for(int j=0;j<i;j++){
                left_max=max(left_max,h[j]);
            }
            int right_max=h[i];
            for(int j=i+1;j<h.size();j++){
                right_max=max(right_max,h[j]);
            }
            count+=min(right_max,left_max)-h[i];
        }
        return count;
        
        */
        
        
      int  n=h.size(),count=0;
       vector<int> leftmax(n);
        leftmax[0]=h[0];
        vector<int> rightmax(n);
        rightmax[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],h[i]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],h[i]);
        }
        //i=1 and n-1 isliye boundary ko exceed karna ha
        for(int i=1;i<n-1;i++){
            count+=min(leftmax[i],rightmax[i])-h[i];
        }
        return count;
        
    }
};