class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {

        //return solve(nums, target);
        vector<int> dp(target+1, -1);
        return solve(nums, target, dp);
        
        
    }
    int solve(vector<int>& nums, int target, vector<int> &dp){
        if(target == 0)
            return 1;
        if(target < 0)
            return 0;
        if(dp[target] != -1)
            return dp[target];
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result = result + solve(nums, target - nums[i], dp);
        }
        dp[target] = result;
        return dp[target];
    }
};