class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        if (nums.size() == 1) return {nums[0]};
        pair<int , int>a = {0,0};
        pair<int , int>b = {0,0};
        for(int num : nums)
        {
            if(num == a.first) a.second++;
            else if(num == b.first) b.second++;
            else if (!a.second ) a = {num,1}; 
            else if (!b.second) b = {num,1};
            else
                 b.second--,a.second--;
        }
            
        a.second = b.second = 0;
        for (int num : nums)
        {
            a.second +=(a.first == num);
            b.second +=(b.first == num);
        }
        if (a.second > nums.size()/3 ) result.push_back(a.first);
        if (b.second > nums.size()/3 && a.first != b.first ) result.push_back(b.first);
        return result;
    }
};