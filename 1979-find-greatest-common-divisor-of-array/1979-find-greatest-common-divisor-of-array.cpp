class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = INT_MAX;
        int max = -1;
        for(int num : nums)
        {
            if (num <= min) min = num;
            if (num >= max) max = num;
        }
        return gcd(min,max);
    }
};