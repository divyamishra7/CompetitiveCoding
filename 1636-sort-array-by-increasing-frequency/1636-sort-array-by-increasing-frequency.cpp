class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int, int> p2){
        if(p1.first != p2.first)
            return p1.first < p2.first;
        else
            return p1.second > p2.second;
    }
   
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        vector<pair<int,int>> v;
        for(auto i : m){
            v.push_back(make_pair(i.second, i.first));
        }
        sort(v.begin(), v.end(),comp);
        vector<int> result;
        for(auto i : v){
            while(i.first > 0){
                result.push_back(i.second);
                i.first--;
            }
        }
        return result;
        
    }
     
    
};




//
// bool comp(pair<int, int>p1, pair<int, int>p2){
//     if(p1.second!=p2.second){
//         return p1.second<p2.second;
//     }
//     else{
//         return p1.first>p2.first;
//     }
// }

// class Solution {
// public:
//     vector<int> frequencySort(vector<int>& nums) {
//         map<int, int>m1;
//         for(auto x:nums){
//             m1[x]++;
//         }
//         vector<pair<int, int>>v1;
//         for(auto x:m1){
//             v1.push_back(make_pair(x.first, x.second));
//         }
//         sort(v1.begin(), v1.end(), comp);
//         vector<int>ans;
//         for(auto x:v1){
//             while(x.second>0){
//                 ans.push_back(x.first);
//                 x.second--;
//             }
//         }
//         return ans;
//     }
// };