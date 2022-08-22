class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solver(board);
        // if(x != 1)
        //     x = solver(board);
        //return;

    }
    bool solver(vector<vector<char>>& board){
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.'){
                    for(char num = '1'; num <= '9' ; num ++){

                        if(rules(board, row, col, num)){
                            //cout<<num<<"it came here"<<endl;
                            board[row][col] = num;
                            if(solver(board))
                                return true;
                            board[row][col] = '.';
                        }
                    } 
                    return false;
                }
            }
        }
        return true;
    }
    
    bool rules(vector<vector<char>>& board,int row, int col, char num){
        for(int j = 0; j < 9; j++){
            if(board[row][j] == num)
                return false;
        }
        for(int i = 0; i < 9; i++){
            if(board[i][col] == num)
                return false;
        }
        int nrow = (row/3) * 3;
        int ncol = (col/3) * 3;
        for(int i = nrow; i < nrow+3; i++){
            for(int j = ncol; j < ncol+3; j++){
                //cout<<i<<" "<<j<<endl;
                if(board[i][j] == num)
                    return false;
            }
        }
        return true;
        // for(int i=0; i<9; i++){
        //     if(board[i][col]==num)
        //         return false;
        //     if(board[row][i]==num)
        //         return false;
        //     if(board[3*(row/3) + i/3][3*(col/3) + i%3]==num)
        //         return false;
        // }
        // return true;
        
    }
};