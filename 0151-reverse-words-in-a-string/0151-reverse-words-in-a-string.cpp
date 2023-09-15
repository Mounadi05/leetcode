#include <regex>

class Solution {
public:
    string reverseWords(string s) {
       
        string result, tocken;
        stringstream inp(s);
        vector<string> word;
    
        while(inp >> tocken)
            word.push_back(tocken);

        for(auto i = word.rbegin() ; i != word.rend() ; i++)
            result += *i + (i+1!=word.rend()? " " : "");
        
        return result;
    }
};