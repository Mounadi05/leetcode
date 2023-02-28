class Solution {
public:
    string replaceDigits(string s) {
        string res;
        res.push_back(s[0]);
        for(int i = 1; i < s.size(); i++)
            if (s[i] >= '0' && s[i] <= '9')
                res.push_back(s[i-1] + s[i]-48);
            else
                res.push_back(s[i]);
        return res;
    }
};