class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result;
        vector<int> temp;
        int count = 0;
        if(m*n > original.size() || m*n < original.size())
            return result;
        for(int i = 0; i < original.size(); i++){
            temp.push_back(original[i]);
            count ++;
            if(count == n){
                result.push_back(temp);
                temp.clear();
                count = 0;
            }
            
        }
        return result;
        
    }
};