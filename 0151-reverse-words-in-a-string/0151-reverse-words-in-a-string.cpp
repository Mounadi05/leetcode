#include <regex>

class Solution {
public:
    string reverseWords(string s) {
       
        string result;
        std::regex r("\\S+");
        auto begin = std::sregex_iterator(s.begin(), s.end(), r);
        std::sregex_iterator end;
        vector<string> word;
        for(auto i = begin ; i != end ; i++)
          word.push_back(i->str());
        for(auto i = word.rbegin() ; i != word.rend() ; i++)
            result += *i + " ";
        return result.substr(0,result.length()-1);
    }
};