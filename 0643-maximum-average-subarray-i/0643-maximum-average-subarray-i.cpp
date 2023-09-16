class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window = 0;
        for(int i = 0; i < k ; i++) window += nums[i];
        double tempWindow = window;
        for(int i = k ; i < nums.size() ; i++)
        {    
            tempWindow += (nums[i]-nums[i - k]);
            window = max(tempWindow,window);
        }
        return window/(double)k;
    }
};