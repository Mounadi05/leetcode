class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
     vector<vector<int>> merge;
     int i = 0; int j = 0;
     while (i < nums1.size() && j < nums2.size())
     {
        if(nums1[i][0] < nums2[j][0])
            merge.push_back(nums1[i++]);
        else if (nums1[i][0] > nums2[j][0])
            merge.push_back(nums2[j++]);
        else
            merge.push_back({nums1[i][0],nums1[i++][1]+nums2[j++][1]});
     }
     if (i < nums1.size())
        while(i < nums1.size())
            merge.push_back(nums1[i++]);
        else
           while(j < nums2.size())
            merge.push_back(nums2[j++]);
        return merge;
    }
};