class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxx = 0;
        int area = 0;
        for(int i = 0; i < grid.size(); i++ ){
            for(int j = 0; j < grid[0].size(); j++){
                
                if(grid[i][j] == 1){
                    // cout<<"\nij"<<i<<j;
                    visited(grid, i, j, area);
                    // cout<<"\n area is : "<< area;
                    maxx = max(area, maxx);
                    area = 0;
                    // cout<<"\n maxx is : "<< maxx;
                }
                else
                    continue;
            }
        }
        return maxx;
        
        
    }
    void visited(vector<vector<int>>& grid, int i, int j, int &area){
        //base
        if(i< 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        if(grid[i][j] == 2)
            return;

        
        
        if(grid[i][j] == 1){
            area = area + 1;
            grid[i][j] = 2;
        }
        
        if(grid[i][j] == 0)
            return;

        //recurssion
        visited(grid, i+1, j, area);
        visited(grid, i-1, j, area);
        visited(grid, i, j-1, area);
        visited(grid, i, j+1, area);
        return;
    }
};