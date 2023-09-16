class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int window = 0,indexZero = 0,lastZero = -1;
        for(int i = 0; i < nums.size() ; i++)
        {
            if (!nums[i]) 
            {
                indexZero = lastZero +1;
                lastZero = i;
            }
            window = max(window,i - indexZero);
        }
        return window;
    }
};