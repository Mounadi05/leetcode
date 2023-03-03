class Solution {
public:
    int averageValue(vector<int>& nums) {
     int div = 0;
     int sum = 0;
     for(int i = 0; i < nums.size(); i++)
        if (!(nums[i]%2) &&  !(nums[i]%3) && ++div) sum +=nums[i];
    return (div) ? sum/div : 0;    
    }
};