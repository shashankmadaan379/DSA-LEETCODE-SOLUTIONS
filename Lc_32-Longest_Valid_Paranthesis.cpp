class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> ch;
        int maxy=0;
        stack<int> idx;
        idx.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ch.push(s[i]);
                idx.push(i);
            }
            else{
                
                if(!ch.empty() and ch.top()=='('){
                    ch.pop();
                    idx.pop();
                    maxy=max(maxy,i-idx.top());
                }
                else{
                    idx.push(i);
                }
            }
        }
        return maxy;
    }
};