class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size();i++)
        {
            int len = words[i].size() - 1;
            int a = 0;
            while(a < len)
                if (words[i][a] == words[i][len])
                    a++,len--;
                else break;
            if (a >= len)
                return words[i];
        }
        return "";
    }
};