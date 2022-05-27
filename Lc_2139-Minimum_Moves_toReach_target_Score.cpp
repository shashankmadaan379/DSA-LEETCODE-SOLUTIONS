class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(target&1){
                target-=1;count++;
            }
            else{
                if(maxDoubles>0){
                    target/=2;
                    count++;
                    maxDoubles--;
                }
                else{
                    count+=target-1;
                    target=1;
                }
            }
        }
        return count;
    }
};