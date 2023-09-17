class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> Diff(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        for(auto num : set1)
            if (!set2.count(num))
                Diff[0].push_back(num);
        for(auto num : set2)
            if (!set1.count(num))
                Diff[1].push_back(num);
        return Diff;
        
    }
};