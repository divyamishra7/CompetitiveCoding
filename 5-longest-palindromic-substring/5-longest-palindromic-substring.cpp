class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        vector<vector<int>> dp(size,(vector<int>(size,0)));
        int maxLength = 1;
        int startIndex;
        int endIndex;
        string result;
        //length 1
        for(int i = 0; i < size; i++){
            dp[i][i] = 1;
        }
        //length 2
        for(int i = 0; i < size-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                maxLength = 2;
                startIndex = i;
                endIndex = i+1;
            }
                
        }
        //length above 2
        for(int len = 2; len < size; len++){
            for(int i = 0; i < size - len; i++){
                if((s[i] == s[i+len])&&(dp[i+1][i+len-1]==1)){
                    dp[i][i+len] = 1;
                    maxLength = len + 1;
                    startIndex = i;
                    endIndex = i+len;
                }
                    
            }
            
        }
        if(maxLength == 1){
            result.push_back(s[0]);
            return result;
        }
        for(int i = startIndex; i <= endIndex; i++){
            result.push_back(s[i]);
        }
        return result;
        
    }
};