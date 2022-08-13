class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        int n = nums.size();
        
        for(int i = 0; i < n-2; i++){
            if(i == 0 || (i>0 && nums[i] != nums[i-1])){
                int low = i+1;
                int hi = n-1;
                int target =  0 - nums[i];
                while(low < hi){
                    if(nums[low] + nums[hi] == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[hi]);
                        result.push_back(temp);
                        while(low<hi && nums[low] == nums[low+1]) low ++;
                        while(low<hi && nums[hi] == nums[hi-1]) hi--;
                        low++;
                        hi--;
                    }
                    else if(nums[low] + nums[hi] < target){
                        low++;
                    }
                    else 
                        hi--;
                }
            }
        }
        
        
        
        return result;
        
    }
};