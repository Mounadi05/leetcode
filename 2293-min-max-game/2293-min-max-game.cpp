class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() <= 2) return min(nums[0],(nums.size() == 2 ? nums[1] : INT_MAX));
        else
        {
            vector<int> tmp;
            bool Min = true; 
            for(int i = 0; i < nums.size(); i+=2)
            {
                if (Min) tmp.push_back(min(nums[i],nums[i+1])),Min = !Min;
                else tmp.push_back(max(nums[i],nums[i+1])),Min = !Min;
            }
            return minMaxGame(tmp);
        }
    }
};