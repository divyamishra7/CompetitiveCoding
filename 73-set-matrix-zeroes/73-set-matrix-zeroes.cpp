class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> isZero;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    isZero.push_back({i,j});
                }
            }
        }
        for(int it = 0; it < isZero.size(); it++){
            int i = isZero[it].first;
            int j = isZero[it].second;
            for(int x = 0; x<matrix.size(); x++){
                for(int y = 0; y < matrix[0].size(); y++){
                        matrix[i][y] = 0;
                        matrix[x][j] = 0;
                        
                    
                }
            }
        }
        
    }

};