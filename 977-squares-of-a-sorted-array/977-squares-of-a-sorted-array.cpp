class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int r = n-1;
        int i = n-1;
        vector<int> result(n,0);
        while(l<=r){
            //nums[i] = nums[i] * nums[i];
            int lsq = nums[l] * nums[l];
            int rsq = nums[r] * nums[r];
            if(lsq > rsq){
                result[i] = lsq;
                l++;
                
            }
            else{
                result[i] = rsq;
                r--;
                
            }
            i--;
        }
        // sort(nums.begin(), nums.end());
        return result;
    }
};