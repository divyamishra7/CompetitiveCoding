class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i = n-1; i >= 0; i--){
            for(int j = n; j >i; j-- ){
                if(nums[i] > nums[j])
                    swap(nums[i], nums[j]);
            }
        }
        
    }
};