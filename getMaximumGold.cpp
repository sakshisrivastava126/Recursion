class Solution {
private:
    int helper(vector<vector<int>>& grid, int i, int j){
        int m = grid.size();
        int n = grid[0].size();

        //checking out of bounds and any grid cell can be the exit point or it can be already visited
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j] == 0) return 0;

        //temp to store value and mark the grid as visited
        int temp = grid[i][j];
        grid[i][j] = 0;

        //taking all moves
        int left = helper(grid, i, j-1);
        int right = helper(grid, i, j+1);
        int up = helper(grid, i-1, j);
        int down = helper(grid, i+1, j);

        //restoring the value of grid after visiting 
        grid[i][j] = temp;

        return max({left, right, up, down}) + grid[i][j];
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxG = 0;

        vector<vector<int>> dp(m, vector<int>(n,-1));

        //calling from each cell coz we can start and end anywhere 
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                maxG = max(maxG, helper(grid, i,j));
            }
        }
        return maxG;
    }
};
