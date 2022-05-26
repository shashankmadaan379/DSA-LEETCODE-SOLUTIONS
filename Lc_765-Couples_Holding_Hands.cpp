class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        ios_base::sync_with_stdio(false);
        int res=0;
        for(int i=0;i<row.size();i+=2){
            int first=row[i];
            int second=(first%2==0) ? first+1 : first-1;
            if(second==row[i+1])continue;
            else{
                for(int j=i+2;j<row.size();j++){
                    if(row[j]==second){
                        res++;
                        swap(row[i+1],row[j]);
                        break;
                    }
                }
            }
        }
        return res;
    }
};

/*
   if the number is even then the partener will be odd i.e number+1;
   
   if the numbee is odd then the partner will be even i.e number-1;

*/