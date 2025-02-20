class Solution{
public:
    int solve(string &a, string &b, int i, int j){
        //base case - end tak pahonch chuke h string ke
        if(i == a.length() || j == b.length()) return 0;

        int ans=0;
        if(a[i] == b[j]){   //agar equal h dono k char to dono k pointers ko move aage
            ans = 1+ solve(a, b, i+1, j+1);
        }
        else{   //else ek-ek kr aage badhao dono ko and jisse max length aajaye keep that
            ans = max(solve(a,b,i+1,j), solve(a,b,i,j+1));
        }
        return ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solve(text1, text2, 0, 0);
    }
};
