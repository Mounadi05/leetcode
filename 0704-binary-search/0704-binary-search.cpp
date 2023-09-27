class Solution {
public:
    int search(vector<int>& nums, int target, int left = 0, int right = -1) {
    if (  right == -1) right = nums.size() -1;
    if (left > right || nums[left] > target || nums[right] < target) 
        return -1;
     int mid = (right + left) / 2;
    if (nums[mid] == target) return mid;
    if (nums[mid] < target) 
        return search(nums,target,mid + 1,right);
    return search(nums,target,left,mid - 1); 
    }
    
};