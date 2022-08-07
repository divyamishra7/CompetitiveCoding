#define mod 1000000007
class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<long>> dp(5,vector<long>(n));
        
        for(int i = 0; i < 5; i++){
            dp[i][0] = 1;
            
        }
        for(int j = 1; j < n; j++){
            dp[0][j] = (dp[2][j-1] + dp[1][j-1] + dp[4][j-1])%mod;
            dp[1][j] = (dp[0][j-1] + dp[2][j-1])%mod;
            dp[2][j] = (dp[1][j-1]+ dp[3][j-1])%mod;
            dp[3][j] = (dp[2][j-1])%mod;
            dp[4][j] = (dp[2][j-1] + dp[3][j-1])%mod;
            }
        int result = dp[0][n-1];
        for(int i = 1; i < 5; i++){
            result = (result + dp[i][n-1])%mod;
            cout<<result<<endl;
        }
        return result;
        
        
        
    }
};