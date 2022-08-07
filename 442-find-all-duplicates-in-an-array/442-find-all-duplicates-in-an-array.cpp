class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i =0; i < nums.size(); i++){
            int key = abs(nums[i])-1;
            if(nums[key] < 0)
                result.push_back(abs(nums[i]));
            nums[key] = (-1) * nums[key];
        }
        return result;
    }
    
};

// [4,-3,-2,-7,8,2,-3,-1]