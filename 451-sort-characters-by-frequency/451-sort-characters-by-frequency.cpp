class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        priority_queue<pair<int,char>> p;
        string result;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
            //str:freq
        }
        for(auto i : m){
            p.push(make_pair(i.second, i.first));
            //freq:str
        }
        while(!p.empty()){
            int freq = p.top().first;
            while(freq != 0){
                result.push_back(p.top().second);
                freq --;
            }
            p.pop();
        }
        return result;
        
    }
};