class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        while(--n)
        {
            for(int  i = 0; i < nums.size() - 1;i++)
                temp.push_back((nums[i] + nums[i + 1]) % 10);
            nums = temp;
            temp.clear();
        }
        return nums[0];
    }
};