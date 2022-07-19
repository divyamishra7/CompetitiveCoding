class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for(int i = 0; i< numRows; i++){
            tri.push_back(vector<int>(i+1, 1));
            for(int j = 1; j < i; j++){
                if(i== 0)
                    tri[i][j] = 1;
                if(i==j)
                    tri[i][j] = 1;
                tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
            }
        }
        return tri;
        
    }
};