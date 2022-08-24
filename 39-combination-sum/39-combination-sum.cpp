class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        helper(candidates, result, temp, 0, target);
        
        return result;
        
    }
    void helper(vector<int>& candidates, vector<vector<int>> &result, vector<int> &temp, int index, int target){
        if(index >= candidates.size()) return;
        if(target == 0){
            //temp.push_back(candidates[index]);
            result.push_back(temp);
            return;
        }
        if(target < 0){
            return;
        }
        //taking ith
        temp.push_back(candidates[index]);
        //taking ith again
        helper(candidates, result, temp, index, target - candidates[index]);
        //not taking ith
        if(!temp.empty())
            temp.pop_back();
        helper(candidates, result, temp, index+1, target );
        return;
        
        
    }
    
};