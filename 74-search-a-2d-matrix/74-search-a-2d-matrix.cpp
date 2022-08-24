class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = m-1;
        int j = 0;
        while(i >= 0 && i < m && j >= 0 && j < n){
            //cout<<matrix[i][j]<<endl;
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] < target) {
                j++;
                continue;
            }
            if(matrix[i][j] > target) {
                i--;
                continue;
            }
        }
        return false;
        
    }
};
