class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = INT_MIN;
        //kadane
        int sum = 0;
        for(int i = 0; i< nums.size(); i++){
            sum = sum + nums[i];
            maxx = max(sum, maxx);
            if(sum < 0)
                sum = 0;
            
        }
        return maxx;
    }
};