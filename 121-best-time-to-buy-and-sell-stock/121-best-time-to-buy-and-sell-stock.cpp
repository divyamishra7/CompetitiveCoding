class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profits;
        for(int i = 0; i< prices.size()-1; i++){
            profits.push_back(prices[i+1]- prices[i]);
        }
        for(int i = 0; i<profits.size(); i++){
            cout<<profits[i]<<" ";
        }
        int maxx = INT_MIN;
        int sum = 0;
        for(int i = 0; i<profits.size(); i++){
            sum = sum + profits[i];
            if(sum < 0)
                sum = 0;
            maxx = max(maxx, sum);
            
            
        }
        if(maxx < 0)
            maxx = 0;
        return maxx;
        
    }
};