class Solution {
public:
    string sortSentence(string s) {
    int i = 49;
    string r;
    string tmp;
    while(s.find_first_of(i) != -1)
    {
        for(int a = s.find_first_of(i) - 1; (a >= 0 && s[a] != ' ') ;a--)
            tmp.push_back(s[a]);
        for(int a = tmp.length()-1 ; a >= 0 ; a--)
            r.push_back(tmp[a]);
        if(s.find_first_of(i+1) != -1)
            r.push_back(' ');
        i++;
        tmp.clear();
    }
    return r;
    }
};