class Solution {
public:
    map<char,vector<string>> mp;
    vector<string> res;
    
    void helper(string digits,int start,string currs){
        if(start==digits.size()){
            res.push_back(currs);
        }
        vector<string> temp=mp[digits[start]];
        for(int i=0;i<temp.size();i++){
            string st=temp[i];
            currs+=st;
            helper(digits,start+1,currs);
            currs.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        ios_base::sync_with_stdio(false);
        if(digits.size()==0){
            return res;
        }
        mp['2']={"a","b","c"};
        mp['3']={"d","e","f"};
        mp['4']={"g","h","i"};
        mp['5']={"j","k","l"};
        mp['6']={"m","n","o"};
        mp['7']={"p","q","r","s"};
        mp['8']={"t","u","v"};
        mp['9']={"w","x","y","z"};
        helper(digits,0,"");
        return res;
    }
};