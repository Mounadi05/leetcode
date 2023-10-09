class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        vector<int> result;
         for(int i = 0; i < nums.size();i++)
        {
             while(i < nums.size() && nums[i] == target)
                     result.push_back(i++);
             if(!result.empty()) return result;
        }
        return result;
    }
};