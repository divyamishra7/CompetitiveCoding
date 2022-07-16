class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i< m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == '1'){
                    count++;
                    visited(grid,i,j);
                }
                else 
                    continue;
                
            }
        }
        return count;
        
    }
    void visited(vector<vector<char>>& grid, int i, int j){
        //base
        if(i< 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        if(grid[i][j] == '2')
            return;
        if(grid[i][j] == '1')
            grid[i][j] = '2';

        if(grid[i][j] == '0')
            return;

        //recurssion
        visited(grid, i+1, j);
        visited(grid, i-1, j);
        visited(grid, i, j-1);
        visited(grid, i, j+1);
        return;
    }
};