class Solution{
private:
    void solve(int open, int close, int n, string current, vector<string> &result){
        if(current.length() == 2*n){    //if we have used total no of parentheses we stop
            result.push_back(current);
            return;
        }
        //open parenth will be added when no. of open < n 
        if(open < n) solve(open+1, close, n, current + "(", result);  
        //closed parenth will be added only when no. of closed < open 
        if(close < open) solve(open, close+1, n, current + ")", result);
    }    
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(0, 0, n, "", result);
        return result;
    }
};
