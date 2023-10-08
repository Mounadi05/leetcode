class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int sum = 0;
        string result;
        int lent_a = a.size()-1;
        int lent_b = b.size()-1;
        while(lent_a >= 0 || lent_b >= 0 || carry)
        {
            sum = carry,carry = 0;
            if (lent_a < a.size()) sum += a[lent_a--] - 48;
            if (lent_b < b.size()) sum += b[lent_b--] - 48;
            if (sum == 2) sum = 0,carry = 1;
            if (sum == 3) sum = 1,carry = 1;
            result.push_back(sum + 48);
        }
        reverse(result.begin(), end(result));
        return result;
    }
};