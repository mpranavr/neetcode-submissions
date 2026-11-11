class Solution {
public:
    vector<string> res;
    string s;

    void backtrack(int open,int close,string s, int n){

        if(open == n && close == n){
            res.push_back(s);
            return;
        }

        if(open < n){
            s.push_back('(');
            backtrack(open+1,close,s,n);
            s.pop_back();
        }

        if(open > close){
            s.push_back(')');
            backtrack(open,close+1,s,n);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {

        backtrack(0,0,s,n);
        return res;
        
    }
};
