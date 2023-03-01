class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) 
    {
         int n = s.size();
        long shiftSum = 0;
        for (int i = n - 1; i >= 0; i--) 
        {
            shiftSum = (shiftSum + shifts[i]) % 26;
            s[i] = ((s[i] - 'a') + shiftSum) % 26 + 'a';
        }
        return s;
    }
};


 

 