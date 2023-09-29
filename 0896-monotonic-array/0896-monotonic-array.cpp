class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing;
        for(int i = 1 ; i < nums.size(); i++)
        {
            if (nums[i - 1] < nums[i])
            {
                increasing = true;
                break;
            }
            else if (nums[i - 1] > nums[i])
            {
                increasing = false;
                break;
            }
        }
        for(int i = 1; i < nums.size();i++)
        {
            if (!increasing && nums[i - 1] < nums[i]) return false;
            if (increasing && nums[i - 1] > nums[i]) return false;
        }
        return true;
    }
};