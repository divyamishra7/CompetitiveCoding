class Solution {
public:
    void sortColors(vector<int>& nums) {
        int swap = 0;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = 0; j < nums.size()-1; j++){
                if(nums[j]>nums[j+1]){
                    swap = 1;
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
            if(swap != 1)
                break;
        }
        
    }
};