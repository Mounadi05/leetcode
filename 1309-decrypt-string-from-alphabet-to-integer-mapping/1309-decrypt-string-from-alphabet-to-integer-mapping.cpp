class Solution {
public:
    string freqAlphabets(string s) {
        string decrypt;
        int i = s.size()-1;
        char c;
        string g;
        while(i >=0)
        {
            if(s[i] == '#')
            {
                i -= 3;
                c = stoi(s.substr(i+1,2))+96;
                decrypt.insert(0,1,c);
            }
            else
            {
                c = s[i--]+96-48;
                decrypt.insert(0,1,c);
            }
        }
        return decrypt;
    }
};