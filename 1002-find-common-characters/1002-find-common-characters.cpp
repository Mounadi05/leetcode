class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        int a;
        for(int i = 0 ; words[0][i]; i++)
        {
            a = 1;          
            string u (1,words[0][i]);
            char o = words[0][i];
              for(; a < words.size(); a++)
               {
                   int l = words[a].find(words[0][i]) ;
                   if (l == -1)break;
                    else words[a][l] = -1;
               }
            if(a == words.size())
                res.push_back(u); 
        }
        return res;
    }
};