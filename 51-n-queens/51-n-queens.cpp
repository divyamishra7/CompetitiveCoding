class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }
        solve(n, 0, result, board);
        return result;
    }

    
    void solve(int n, int col, vector<vector<string>> &result, vector<string> &board){
        if(col == n){
            result.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(Safe(row, col, board, n) == true){
                board[row][col] = 'Q';
                solve(n,col+1,result,board);
                board[row][col] = '.';
            }
        }
    }
    

    
    bool Safe(int row, int col, vector<string> &board, int n){
        int tempRow = row;
        int tempCol = col;
        //upper diagonal
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        row = tempRow;
        col = tempCol;
        //left
        while(col >= 0){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        row = tempRow;
        col = tempCol;
        //lower diagonal
        while(row < n && col >= 0){
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
        
    }

    
};


//
// class Solution {
//   public:
//     bool isSafe1(int row, int col, vector < string > board, int n) {
//       // check upper element
//       int duprow = row;
//       int dupcol = col;

//       while (row >= 0 && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row--;
//         col--;
//       }

//       col = dupcol;
//       row = duprow;
//       while (col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         col--;
//       }

//       row = duprow;
//       col = dupcol;
//       while (row < n && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row++;
//         col--;
//       }
//       return true;
//     }

//   public:
//     void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) {
//       if (col == n) {
//         ans.push_back(board);
//         return;
//       }
//       for (int row = 0; row < n; row++) {
//         if (isSafe1(row, col, board, n)) {
//           board[row][col] = 'Q';
//           solve(col + 1, board, ans, n);
//           board[row][col] = '.';
//         }
//       }
//     }

//   public:
//     vector < vector < string >> solveNQueens(int n) {
//       vector < vector < string >> ans;
//       vector < string > board(n);
//       string s(n, '.');
//       for (int i = 0; i < n; i++) {
//         board[i] = s;
//       }
//       solve(0, board, ans, n);
//       return ans;
//     }
// };