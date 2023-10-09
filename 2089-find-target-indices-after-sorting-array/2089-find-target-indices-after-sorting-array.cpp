class Solution {
public:
    // vector<int> targetIndices(vector<int>& nums, int target) {
    //     sort(begin(nums),end(nums));
    //     vector<int> result;
    //     for(int i = 0; i < nums.size();i++)
    //     {
    //          while(i < nums.size() && nums[i] == target)
    //                  result.push_back(i++);
    //          if(!result.empty()) return result;
    //     }
    //     return result;
    // }
     vector<int> targetIndices(vector<int>& nums, int target) {
        int count = 0,index = 0;
        vector<int> result;
        for(int num : nums)
        {
            if (num < target) index++;
            else if (num == target) count++;
        }
        while(--count >= 0) result.push_back(index++);
        return result;
     }

};