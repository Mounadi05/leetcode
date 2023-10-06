class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<vector<int>> hash(words.size(),vector<int>(26 ,-1));
        int count = 0;
        for(int i = 0;i < words.size();i++)
            for(int j=0;j < words[i].size();j++)
                hash[i][words[i][j] - 'a'] = 1;
        for(int i = 0; i < hash.size();i++)
            for(int j = i+1 ; j < hash.size();j++)
                if (hash[i] == hash[j]) count++;
        return count;
    }
};