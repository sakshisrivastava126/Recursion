class Solution{
 private:
    bool check(string s, vector<string>& wordDict){  //checks whether new string hmari wordDict me hai ya ni
        for(int i=0; i<wordDict.size(); i++){
            if(s == wordDict[i]) return true;
        }
        return false;
    }    

    bool genWord(string s, int indx, vector<string>& wordDict){
        if(indx == s.size()) return true;           //base case checking agar end tak we have reached mtlb sab badhiya h return true and koi interruption ni aayi h

        string newS = "";                   
        for (int i = indx; i < s.size(); i++) {
            newS += s[i];

            if(check(newS, wordDict)){
                if(genWord(s, i+1, wordDict)){    //recursion call tab hi hoga jab hme new string 
                    return true;                              //already mil gaya ho
                }
            } 
        }
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        return genWord(s, 0, wordDict);
    }
};
