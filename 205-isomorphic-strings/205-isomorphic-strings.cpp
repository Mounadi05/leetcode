class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = -1;    
        while(++i < s.length() && i < t.length())
           if(s.find_first_of(s[i],0) != t.find_first_of(t[i],0))
                return false;
        return true;
    }
};