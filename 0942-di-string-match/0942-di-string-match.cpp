class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a = 0;
        int e = s.size();
        vector <int> res;
        for(int i = 0; i <= s.size();i++)
            if (s[i] == 'I') res.push_back(a++);
            else res.push_back(e--);
        return res;
        
    }
};