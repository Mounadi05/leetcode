class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        vector<int> hash(26,-1);
        vector<int> tmp(26,-1);
        int index = 0;
        for(char c : p)
            hash[c - 'a']++;
        int n = p.size();
        for (int i = 0; i < s.size(); i++) 
        {
            tmp[s[i] - 'a']++;
            if (i >= n - 1) 
            {
                if (tmp == hash)
                    result.push_back(i - n + 1);

                tmp[s[index] - 'a']--;
                index++;
            }
        }
        return result;
    }
};