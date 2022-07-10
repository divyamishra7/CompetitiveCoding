class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            sum = sum + nums[i];
        }
        if(sum % 2 == 1)
            return false;
        int target = sum / 2;
        vector<vector<bool>> dp(size+1,vector<bool>(target +1,0));
        for(int i = 0; i < size; i++){
            dp[i][0] = true;
        }
        for(int j = 1; j < target+1; j++){
            dp[0][j] = false;
        }
        for(int i = 1; i < size; i++){
            for(int j = 1; j < target + 1; j++){
                if(nums[i-1] > j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j - nums[i-1]] || dp[i-1][j];
            }
        }
        return dp[size-1][target];
    }
};