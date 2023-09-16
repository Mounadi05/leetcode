class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int result = (right - left) * min(height[left],height[right]);
        while(left <= right)
        {
            result = max(result,(right - left) * min(height[left],height[right]));
            if (height[right] < height[left]) right--;
            else left++;
        }
        return result;
    
    }
};