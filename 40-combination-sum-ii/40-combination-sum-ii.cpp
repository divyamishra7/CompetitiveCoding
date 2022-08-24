class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        helper(candidates, result, temp, 0, target);
        //vector<vector<int>> res(result.begin(), result.end());
        return result;
        
    }
    void helper(vector<int>& candidates, vector<vector<int>> &result, vector<int> &temp, int index, int target){
        //if(candidates[index] > target) return;
        if(target < 0) return;
        if(target == 0){
            result.push_back(temp);
            return;
        }
        if(index >= candidates.size()) return;
        
        temp.push_back(candidates[index]);
        helper(candidates, result, temp, index+1, target-candidates[index]);
        int i = 1;
        while(index+i<candidates.size() && candidates[index]==candidates[index+i]){
         //if(index >= 0 && candidates[index] != candidates[index+1]) return;
        i++;
        }
        temp.pop_back();
        helper(candidates, result, temp, index+i, target);   
            
            
        
        
            
        
    }
};