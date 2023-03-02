class Solution {
public:
    string freqAlphabets(string s) {
        string decrypt;
        int i = s.size()-1;
        while(i >=0)
        {
            if(s[i] == '#')
            {
                i -= 3;
                decrypt.insert(0,1,stoi(s.substr(i+1,2))+96);
            }
            else
                decrypt.insert(0,1,s[i--]+96-48);
        }
        return decrypt;
    }
};