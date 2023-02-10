class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for(char c : s)
        { 
           if (!s1.empty() && c == '#') s1.pop();
           if (c != '#') s1.push(c);
        }
        for(char c : t)
        {
            if (!s2.empty() && c == '#') s2.pop();
            if (c != '#')s2.push(c);
        }
        return (s1 == s2);
    }
};