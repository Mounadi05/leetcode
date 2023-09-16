class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowel{'a','e','i','o','u'};
         int window = 0;
        for(int i = 0; i < k ;i++)
            if (vowel.count(s[i]))
                window++;
        int tempWindow = window;
        for(int i = k;i < s.size(); i++)
        {
            tempWindow += (vowel.count(s[i]) - vowel.count(s[i - k])) ;
            window = max(window,tempWindow);
        }
        return window;
    }
};