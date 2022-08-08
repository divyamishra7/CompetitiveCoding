class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> p;
        unordered_map<int, int> m;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]] ++;
        }
        for(auto i : m){
            p.push(make_pair(i.second, i.first));
            //freq:key
        }
        for(auto i = 0; i < k; i++){
            result.push_back(p.top().second);
            p.pop();
        }
        return result;
        
        
    }
};