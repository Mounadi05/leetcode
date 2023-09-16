class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = 0;
        for(int i = 0; i < k ; i++) maxAverage += nums[i];
        double tempAverage = maxAverage;
        for(int i = k ; i < nums.size() ; i++)
        {    
            tempAverage = tempAverage + (nums[i]-nums[i - k]);
            maxAverage = max(tempAverage,maxAverage);
        }
        return maxAverage/(double)k;
    }
};