class Solution{
private:
    void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int> > &ans)  {
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    //case where we are excluding the current index
    solve(nums, output, index+1, ans);

    //case where we are including the current index
    output.push_back(nums[index]);
    solve(nums, output, index+1, ans);

} 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};
