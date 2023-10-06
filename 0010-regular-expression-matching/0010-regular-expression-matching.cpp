class Solution {
public:
    bool matching(string s, string p , int i, int j, vector<vector <bool>> &dp)
    {
        if(dp[i][j]) return false;
        dp[i][j] = 1;
        if (j == p.length()) return i == s.length();

        bool match = (i < s.length() && (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < p.length() && p[j + 1] == '*') 
            return (matching(s, p, i, j + 2,dp) || (match && matching(s, p, i + 1, j,dp)));
        return match && matching(s, p, i + 1, j + 1,dp);
    }
    
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp(s.size()+1,vector<bool>(p.size()+1,false));
        return matching(s,p,0,0,dp);
    }
};