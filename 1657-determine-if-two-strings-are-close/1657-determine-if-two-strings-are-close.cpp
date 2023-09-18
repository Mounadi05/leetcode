class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int chars1[26] = {0},chars2[26] = {0};
        unordered_set<char> set1(word1.begin(), word1.end());
        unordered_set<char> set2(word2.begin(), word2.end());
        for(char c : word1) chars1[c- 'a']++;
        for(char c : word2) chars2[c- 'a']++;
        sort(begin(chars1),end(chars1));
        sort(begin(chars2),end(chars2));
        return (word1.size() == word2.size() && set1 == set2 && equal(begin(chars1),end(chars1),begin(chars2)));
    }
};