class Solution {
public:
      bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;  
        int min2 = INT_MAX;  
        for (int min3 : nums)
            if (min3 <= min1) 
                min1 = min3; 
            else if (min3 <= min2)
                min2 = min3;  
            else 
                return true;
        return false; 
    }
};