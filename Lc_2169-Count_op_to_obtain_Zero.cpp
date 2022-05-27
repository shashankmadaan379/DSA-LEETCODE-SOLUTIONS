class Solution {
public:
    int countOperations(int num1, int num2) {
        ios_base::sync_with_stdio(false);
        int count=0;
        for(count=0;num1 and num2;count++){
            (num1>num2) ? num1-=num2 : num2-=num1;
        }
        return count;
    }
};
