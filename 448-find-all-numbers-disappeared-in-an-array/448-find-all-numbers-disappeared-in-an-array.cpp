class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }
        for(int j = 1; j <= nums.size(); j++){
            if(umap[j] == 0)
                result.push_back(j);
                
        }
        return result;
        
        
    }
};
