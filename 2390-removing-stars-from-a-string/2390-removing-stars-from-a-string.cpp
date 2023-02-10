class Solution {
public:
    string removeStars(string s) {
        string s1;
        for(char c : s)
        {
            if (!s1.empty() &&  c == '*') s1.pop_back();
            if (c != '*') s1.push_back(c);
        }
        return s1;
    }
};