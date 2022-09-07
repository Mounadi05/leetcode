class Solution {
public:
    bool checkIfPangram(string s) {
        int a[26] = {0};
        for(int i = 0; i < s.size(); i++)
            a[(s[i] - 97)] += 1;
        for(int i = 0; i < 26 ; i++)
            if (a[i] == 0)return false;
        return true;
    }
};