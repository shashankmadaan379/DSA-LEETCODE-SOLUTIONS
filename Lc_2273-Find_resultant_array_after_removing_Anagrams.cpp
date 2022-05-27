class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       vector<string> res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            string curr=words[i];
            string prev=res[res.size()-1];
            sort(begin(curr),end(curr));
            sort(begin(prev),end(prev));
            if(curr!=prev){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};