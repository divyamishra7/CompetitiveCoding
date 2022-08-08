class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int maxReachableIndex = 0;
        for(int i = 0; i < size; i++ ){
            if(maxReachableIndex < i)
                return false;
            maxReachableIndex = max(maxReachableIndex, i + nums[i]);
        }
        return true;
        
    }
};