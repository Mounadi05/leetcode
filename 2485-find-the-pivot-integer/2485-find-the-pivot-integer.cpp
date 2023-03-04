class Solution {
public:
    int pivotInteger(int n) {
        int left = 0;
        int right = 0;
        for(int i = 1; i <= n ; i++)
            left += i;
        for(int i = n ; i > 0 ; i--)
        {
            right += i;
            if (right == left) return i;
            left -= i;
        }
        return -1;
    }
};