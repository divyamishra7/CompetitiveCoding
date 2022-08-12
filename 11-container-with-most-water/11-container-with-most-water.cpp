class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int water;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int h = min(height[i], height[j]);
            water = h * (j-i);
            maxWater = max(maxWater, water);
            if(height[i] < height[j])
                i++;
            else
                j--;
            
        }
        return int(maxWater);
    }
};