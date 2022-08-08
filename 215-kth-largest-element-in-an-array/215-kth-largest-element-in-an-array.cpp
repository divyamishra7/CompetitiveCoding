class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //priority queue is max heap basically
        priority_queue<int> maxHeap;
        //to convert it to min heap :
        //priority_queue<int, vector<int>, greater<int> > g ;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            maxHeap.push(nums[i]);
            
        }
        for(int count = 1; count < k; count ++){
            maxHeap.pop();
        }
        return maxHeap.top();
        
    }
};