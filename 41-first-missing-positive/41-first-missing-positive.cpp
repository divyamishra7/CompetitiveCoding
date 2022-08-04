class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //int ans = 0;
        for(int i = 0; i< nums.size(); i++){
            while(nums[i] >= 1 && nums[i]<= nums.size() && nums[i] != nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
            //cout<<endl<< i+1<<" "<< nums[i];
            
        }
        for(int i = 0; i < nums.size(); i++){
            //cout<<endl<< i+1<<" "<< nums[i];
            if(nums[i] != i+1)
                return i+1;
        }
        return nums.size() + 1;
        
    }
    
};
