class Solution {
public:
    string removeTrailingZeros(string num) {
        int lent = num.size() - 1;
        int count = 0;
        while(num[lent] == '0' && lent-- && ++count);
        return num.substr(0,num.size() - count);
    }
};