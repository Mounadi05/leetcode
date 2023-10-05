
class Solution {
public:
    static bool comp(pair<char,int> &a,pair<char,int> &b)
    {
        return (b.second < a.second);
    }
    string frequencySort(string s) {
        map<char,int>  frequency;
        string result;
        for(char c :s)
            frequency[c]++;
        vector<pair<char,int>> sorted;
        for(auto p : frequency)
            sorted.push_back(p);
        std::sort(begin(sorted),end(sorted),comp);
        for(auto p : sorted)
            for(int i = 0; i < p.second;i++)
                result.push_back(p.first);
        return result;
    }
};