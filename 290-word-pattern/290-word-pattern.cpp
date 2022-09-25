class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str;
        string tmp;
        stringstream x(s);
        char a = 97;
        char b = 0;
        while(getline(x,tmp,' '))
            str.push_back(tmp),tmp.clear();
        for(int i = 0; i < str.size(); i++)
        {
           for(int j = 0 ; j < i ;j++)
               if (str[i] == str[j])
                   b = tmp[j];
            if(b) tmp.push_back(b);
            else
            {
                tmp.push_back(a);
                a++;
            }
            b = 0;
        }
        int i = -1;    
        while(++i < pattern.length() || i < tmp.length())
           if(pattern.find_first_of(pattern[i],0) != tmp.find_first_of(tmp[i],0))
                return false;
        return true;
    }
};