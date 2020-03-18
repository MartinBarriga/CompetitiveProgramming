class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = -1;
        int left = 0;
        int right = height.size()-1;
        int area;
        while(left < right){
            area = (right - left) * min(height[right], height[left]);
            if(area > maxA) maxA = area;
            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxA;
    }
};