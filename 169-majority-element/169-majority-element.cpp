class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        nth_element(nums.begin(), nums.begin() + size/2, nums.end());
        return nums[size/2];
    }
};