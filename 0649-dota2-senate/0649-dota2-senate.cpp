 class Solution {
public:
  string predictPartyVictory(string senate) {
        vector<string> vote;
        int R = 0, D = 0;
      string first = (senate[0] == 'R') ? "Radiant" : "Dire";

        for(char c : senate)
        { 
            if (c == 'R')
                R++;
            else 
               D++;
        }
        int p_r = 0;
        int p_d = 0;
        for(int i = 0; i < senate.size() && R > 0 && D > 0;i++)
        {
           
            if (senate[i] == 'R' && p_r < 0){
                p_r++;
                continue;
            }
            if (senate[i] == 'D'  && p_d < 0) 
            {
                p_d++;
                continue;
            }
            if (senate[i] == 'R')
            {
                p_d--;
                D--;
                senate.push_back('R');
            }
            else 
            {
                p_r--;
                R--;
                senate.push_back('D');
                
            }
         
         }
         return (R == D) ? first :(R < D) ? "Dire" : "Radiant";
    }
 };