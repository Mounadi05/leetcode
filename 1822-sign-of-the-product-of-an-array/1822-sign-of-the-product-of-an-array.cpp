class Solution {
public:
    int arraySign(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) return 0;
            nums[i] = nums[i] > 0 ? 1 : nums[i] < 0 ? -1 : 0;
        }
        int  a = nums[0];
        for(int i = 1 ; i< nums.size(); i++)
            a *= nums[i];
    return a < 0 ? -1 : a > 0 ? 1 : 0;
    }
};