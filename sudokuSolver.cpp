class Solution{
    private:
     bool isSafe(int row, int col, vector<vector<char>>& board, int value){
        for(int i=0; i<9; i++){
            if(board[row][i] == value) return false;

            if(board[i][col] == value) return false;

            if(board[3*(row/3) + i/3][3*(col/3) + i%3] == value) return false;
        }
        return true;
     }

     bool solve(vector<vector<char>>& board){

        for(int row=0; row<9; row++){
            for(int col=0; col<9; col++){

                //empty
                if(board[row][col] == '.'){
                    for(int val=1; val<=9; val++){
                        char ch = '0' + val;
                        if(isSafe(row, col, board, ch)){
                            board[row][col] = ch;
                            //recursive call
                            if(solve(board)) return true;
                            else{
                                //backtrack
                                board[row][col] = '.';
                            }                
                        }
                    }
                    return false;
                }
            }
        }
        return true;
     }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
