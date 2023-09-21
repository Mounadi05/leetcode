class Solution {
public:
  string predictPartyVictory(string s) {
        int R = 0, D = 0,sR = 0, sD= 0;
        for(char c : s)(c == 'R') ? R++:D++;
        for(int i = 0; i < s.size() && R > 0 && D > 0;i++){
            if ((s[i] == 'R' && sR < 0) || (s[i] == 'D'&& sD < 0)){sR += (s[i] == 'R'),sD += s[i] == 'D';continue;}
            if (s[i] == 'R')sD--,D--,s.push_back('R');
            else sR--,R--,s.push_back('D');
         }
         return (R < D) ? "Dire" : "Radiant";
    }
 };