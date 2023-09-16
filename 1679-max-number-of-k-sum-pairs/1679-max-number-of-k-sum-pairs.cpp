class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result = 0,left = 0,right= nums.size()-1;
        sort(nums.begin(),nums.end());
        while(left < right)
        {
            if (nums[right] + nums[left] == k)
            {
                right--,left++,result++;
            }
            else if (nums[right] + nums[left] > k) right--;
            else left++;
        }
        return result;
    }
};