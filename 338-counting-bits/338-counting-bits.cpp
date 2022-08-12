class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1);
        dp[0] = 0;
        int offsetNum = 1;
        for(int i = 1; i < n+1; i++){
            if(offsetNum * 2 == i)
                offsetNum = i;
            dp[i] = 1 + dp[i - offsetNum]; 
        }
        return dp;
        
        
    }
};