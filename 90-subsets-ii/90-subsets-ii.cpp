class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
        vector<int> temp;
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        helper(nums, 0, res, temp);
        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
    void helper(vector<int>& nums, int i, set<vector<int>> &res, vector<int> temp){
        //vector<int> temp;
        if(i == nums.size()){
            res.insert(temp);
            return;
        }
            
        
        helper(nums, i+1, res, temp);
        temp.push_back(nums[i]);
        helper(nums, i+1, res, temp);
    }
};

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> result;
//         vector<int> temp;
//         helper(nums, 0, result, temp);
        
//         return result;
//     }
//     void helper(vector<int>& nums, int i, vector<vector<int>> &result, vector<int> temp){
//         //vector<int> temp;
//         if(i == nums.size()){
//             result.push_back(temp);
//             return;
//         }
            
        
//         helper(nums, i+1, result, temp);
//         temp.push_back(nums[i]);
//         helper(nums, i+1, result, temp);
//     }