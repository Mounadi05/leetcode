class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int left = 0; int right = 0;
        vector<int> sum;
        for(int i = 1 ; i < nums.size() ; i++)
            right += nums[i];
        for(int i = 1; i < nums.size(); i++)
        {
            sum.push_back(abs(left-right));
            left += nums[i - 1];
            right -= nums[i];
        }
        sum.push_back(nums.size() > 1 ? abs(left - right) : 0);
        return sum;
    }
};