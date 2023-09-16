class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel("aeiou");
        int window = 0;
        for(int i = 0; i < k ;i++)
            if (vowel.find(s[i]) != -1)
                window++;
        int tempWindow = window;
        for(int i = k;i < s.size(); i++)
        {
            tempWindow += ((vowel.find(s[i]) == -1) ? 0 : 1) - ((vowel.find(s[i - k]) == -1) ? 0 : 1);
            window = max(window,tempWindow);
        }
        return window;
    }
};