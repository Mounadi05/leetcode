class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size()-1; i +=2)
            for(int a = 0; a < nums[i] ; a++)
                res.push_back(nums[i+1]);
        return res;
    }
};