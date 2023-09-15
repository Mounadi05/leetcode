class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int i = 0, j = 0;
        while(i < word1.size() || j < word2.size())
        {
            if(i < word1.size()) merge.push_back(word1[i++]);
            if(j < word2.size()) merge.push_back(word2[j++]);
        }      
        return merge;
    }
};