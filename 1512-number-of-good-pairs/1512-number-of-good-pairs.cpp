class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result=0;
        unordered_map<int, int> m;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i : m){
            if(i.second > 1){
                result = result + (i.second * (i.second - 1)/2);
            }
        }
        return result;
    }
};