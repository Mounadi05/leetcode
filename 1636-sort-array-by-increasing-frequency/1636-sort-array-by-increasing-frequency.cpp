class Solution {
public:
     static bool comp(pair<int,int> &a,pair<int,int> &b)
    {
        return (b.second > a.second) ? true : (b.second < a.second) ? false : (b.first < a.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>  frequency;
        vector<int> result;
        for(int num :nums)
            frequency[num]++;
        vector<pair<int,int>> sorted;
        for(auto p : frequency)
            sorted.push_back(p);
        std::sort(begin(sorted),end(sorted),comp);
        for(auto p : sorted)
            for(int i = 0; i < p.second;i++)
                result.push_back(p.first);
        return result;
    }
};

   