class Solution {
public:
    string reverseVowels(string s) {
        int max = s.size() -1;
        int  i = 0;
        char temp;
        string vowels("aAeEiIoOuU");
        while(i <=  max && max != 0)
        {
            if (vowels.find(s[i]) != -1 && vowels.find(s[max]) != -1)
            {
                temp = s[i];
                s[i++] = s[max];
                s[max--] = temp;
            }
            if(vowels.find(s[i]) == -1) i++;
            if(vowels.find(s[max]) == -1) max--;
        }
        return s;
    }
};