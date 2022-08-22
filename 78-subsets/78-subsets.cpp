//recurssive
//
//
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        helper(nums, 0, result, temp);
        
        return result;
    }
    void helper(vector<int>& nums, int i, vector<vector<int>> &result, vector<int> temp){
        //vector<int> temp;
        if(i == nums.size()){
            result.push_back(temp);
            return;
        }
            
        
        helper(nums, i+1, result, temp);
        temp.push_back(nums[i]);
        helper(nums, i+1, result, temp);
    }
};