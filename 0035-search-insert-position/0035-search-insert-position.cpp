class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
       int left = 0, right = nums.size() -1;
        if (nums[right] < target) return nums.size();
        if (nums[left] > target) return 0;
        int mid = 0;
        while(left <= right)
        {   
             mid = (right + left)/2;
             if (nums[mid] == target) return mid;
             if (nums[mid] < target) 
                left = mid + 1;
              else right = mid - 1; 
        }
        return left;
    }
};