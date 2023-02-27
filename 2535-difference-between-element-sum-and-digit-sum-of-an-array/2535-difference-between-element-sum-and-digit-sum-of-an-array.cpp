class Solution {
public:
    int sumDigt(int n)
    {
        int q = 0;
       // if (n <= 9) return n;
        while(n > 0)
        {
            q += n%10;
            n /= 10;
        }
        return q;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum_element = 0;
        int sum_digt = 0;
        for(int i = 0; i <  nums.size(); i++)
        {
            sum_element += nums[i];
            sum_digt += sumDigt(nums[i]); 
        }
        return abs(sum_element - sum_digt);
    }
};