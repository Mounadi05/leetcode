class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> Diff(2);
        for(const auto num : nums1)
            if (find(Diff[0].begin(), Diff[0].end(),num) == Diff[0].end() && find(nums2.begin(), nums2.end(), num) ==  nums2.end())
                Diff[0].push_back(num);
        for(const auto num : nums2)
            if (find(Diff[1].begin(), Diff[1].end(),num) == Diff[1].end()&& find(nums1.begin(), nums1.end(), num) ==  nums1.end()) 
                Diff[1].push_back(num);
        return Diff;
    }
};