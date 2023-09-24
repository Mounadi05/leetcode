class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string result;
        for(int i = 0 ; i < words.size(); i++)
            result.push_back(words[i][0]);
        return s == result;
    }
};