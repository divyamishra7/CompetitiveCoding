class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> result;
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        int count = 0;
        int mptr = 0;
        int nptr = 0;
        while(count != m+n){
            if(nums1[mptr] <= nums2[nptr]){
                result.push_back(nums1[mptr]);
                mptr ++;
            }
            else{
                result.push_back(nums2[nptr]);
                nptr ++;
                
            }
            count ++;
        }
        
        double median;
        if((m+n)%2 == 0){
            // cout<<"even : "
            // cout<<result[(m+n)/2]<< ", ";
            // cout<<result[((m+n)/2)+1];
            median = double(result[(m+n)/2] +  result[((m+n)/2)-1]) / 2;
        }
        else{

            median = result[((m+n)/2)];
        }
        return median;
        
        
    }
};