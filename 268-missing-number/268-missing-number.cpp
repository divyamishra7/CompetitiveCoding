class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            
        }
        int sumexp = (n*(n+1))/2;
        return sumexp - sum;
        
    }
};