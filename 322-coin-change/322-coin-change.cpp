class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int size = coins.size();
        vector<vector<int>> dp(size+1, vector<int>(amount + 1));
        //initialising 0th row
        for(int j = 0; j < amount+1; j++){
            dp[0][j] = INT_MAX-1;
            //cout<<dp[0][j]<<"  ";
        }
        //initialising 0th column
        for(int i = 1; i < size+1; i++){
            dp[i][0] = 0;
            //cout<<dp[i][0]<<endl;
        }
        //initialising 1st row
        for(int j = 1; j < amount + 1; j++){
            if((j%coins[0]) == 0)
                dp[1][j] = j/coins[0];
            else
                dp[1][j] = INT_MAX-1;
            //cout<<dp[1][j]<<"  ";
        }
        //applying conditions to the rest of the rows and columns
        for(int i = 2; i < size+1; i++){
            for(int j = 1; j < amount+1; j++){
                if(j < coins[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = min( (1+dp[i][j-coins[i-1]]), dp[i-1][j]);
                //cout<<dp[i][j]<<"  ";
            }
            //cout<<endl;
        }
        if(dp[size][amount] == INT_MAX-1)
            dp[size][amount] = -1;
        
        return dp[size][amount];
        
    }
};