class Solution {
public:
    int countSubstrings(string s) {
        int size = s.size();
        vector<vector<int>> dp(size, vector<int>(size, 0));
        int result = size;
        //length 1
        for(int i = 0; i < size; i++){
            dp[i][i] = 1;
        }
        
        //length 2
        
        for(int i = 0; i < size-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                //cout<<i<<i+1;
                result ++;
            }
            
        }

        //length above 2
        for(int len = 2; len < size; len++){
            for(int i = 0; i < size - len; i++){
                if((s[i] == s[i + len]) &&(dp[i+1][i+len-1] == 1)){
                    //cout<<i<<" "<<len<<endl;
                    dp[i][i+len] = 1;
                    result++;
                }
            }
            //cout<<len<<result<<endl;
        }
        
        
        return result;
    }
};