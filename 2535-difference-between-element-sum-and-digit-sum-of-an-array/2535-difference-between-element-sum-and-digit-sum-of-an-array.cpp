class Solution {
public:

    int differenceOfSum(vector<int>& nums) {
        int sum_element = 0;
        int sum_digt = 0;
        for(int i = 0; i <  nums.size(); i++)
        {
            sum_element += nums[i];
            int n = nums[i];
            do
                sum_digt += n%10;
            while(n /= 10);
        }
        return abs(sum_element - sum_digt);
    }
};