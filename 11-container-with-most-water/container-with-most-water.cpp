class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int water = 0;
        while(l < r){
            int width = r - l;
            int k = width * min(height[l], height[r]);
            water = max(water, k);
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return water;
    }
};