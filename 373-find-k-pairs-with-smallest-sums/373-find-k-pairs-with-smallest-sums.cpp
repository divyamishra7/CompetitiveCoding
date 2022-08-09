class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>> q;
        vector<vector<int>> result;
        int size1 = nums1.size(); 
        int size2 = nums2.size();
        int qSize = 0;
        for(int i = 0; i < size1; i++){
            for(int j = 0; j < size2; j++){
                int sum = nums1[i] + nums2[j];
                if(qSize < k){
                    q.push(make_pair(sum, make_pair(nums1[i], nums2[j])));
                    qSize ++;
                }
                else if(sum < q.top().first){
                    q.pop();
                    qSize--;
                    q.push(make_pair(sum, make_pair(nums1[i], nums2[j])));
                    qSize ++;
                }
                else
                    break;
                    
                
            }
        }
        
        while(qSize != 0){
            vector<int> temp;
            temp.push_back(q.top().second.first);
            temp.push_back(q.top().second.second);
            q.pop();
            result.push_back(temp);
            qSize--;
                           
        }
        
        
        
        return result;
    }
};

