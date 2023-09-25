class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<string> result;
        for(string word : words)
        {
            stringstream ss(word);
            string w;
            while(!ss.eof()) 
            {
                getline(ss, w, separator);
                if (!w.empty()) result.push_back(w);
            }
        }
        return result;
    }
};