class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size() - 1;
        int j = 0;
        
        return smHelper(matrix, target, i, j);
        
        
    }
    bool smHelper(vector<vector<int>>& matrix, int target, int i, int j){
        //cout<<"i : "<<i<<" j : "<<j<<"\n";

        if(i < 0 || j < 0 || i>= matrix.size() || j>= matrix[0].size()){
            // cout<<"at false i : "<<i<<" j : "<<j<<"\n";
            // cout<<"matrix size : "<<matrix.size();
            return false;
        }
            
        else if(matrix[i][j] == target)
            return true;
        else if(matrix[i][j] < target)
            return smHelper(matrix, target, i,j+1);
        else //if (matrix[i][j] > target)
            return smHelper(matrix, target, i -1, j);
        
    }
    
};