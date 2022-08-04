class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num1 = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(num1 == nums[i])
                return true;
            num1 = nums[i];
            
        }
        return false;
        
    }
};