class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        int water = 0;
        if(n+1 < 3)
            return water;
        int maxLeft = height[0];
        int maxRight = height[n];
        int left = 1;
        int right = n-1;
        
        while(left<=right){
            if(maxLeft < maxRight){
                if(height[left] >= maxLeft)
                    maxLeft = height[left];
                    
                else{
                    int bef = water;
                    water = water + maxLeft - height[left];
                    // cout<<bef<<" + "<<maxLeft<<" - "<<height[left]<<" = "<<water<<endl;
                }
                    
                left ++;
            }
            else{
                if(height[right] >= maxRight)
                    maxRight = height[right];
                
                else{
                    int bef = water;
                    water = water + maxRight - height[right];
                    // cout<<bef<<" + "<<maxRight<<" - "<<height[right]<<" = "<<water<<endl;
                }
                    
                    
                right --;
                
            }
        }
      return water;  
    }
};
