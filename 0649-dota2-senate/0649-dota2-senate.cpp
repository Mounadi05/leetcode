 class Solution {
public:
  string predictPartyVictory(string senate) {
        int R = 0, D = 0,skipRadiant = 0, skipDire= 0;
        
        for(char c : senate){ 
            if (c == 'R')R++;
            else D++;
        }
      
        for(int i = 0; i < senate.size() && R > 0 && D > 0;i++){
           
            if ((senate[i] == 'R' && skipRadiant < 0) || (senate[i] == 'D'  && skipDire < 0))
            {
                skipRadiant += (senate[i] == 'R');
                skipDire += senate[i] == 'D';
                continue;
            }
            if (senate[i] == 'R'){
                skipDire--;
                D--;
                senate.push_back('R');
            }
            else {
                skipRadiant--;
                R--;
                senate.push_back('D');
            }
         
         }
         return (R < D) ? "Dire" : "Radiant";
    }
 };