class Solution{
 private:
      void solve(int indx, int sum, vector<int>& arr, vector<int> &ans){
          if(indx == arr.size()){
              ans.push_back(sum);
              return;
          }
          
          //picking the element
          solve(indx+1, sum + arr[indx], arr, ans);
          
          //not picking the element
          solve(indx+1, sum, arr, ans);
      }
   public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        solve(0, 0, arr, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
