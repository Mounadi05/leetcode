class Solution {
public:
    int pivotInteger(int n) {
        int left = 0;
        if (n == 1) return n;
        for(int i = 1; i < n ; i++)
            left += i;
        int right = n + n - 1;
        for(int i = n - 2; i > 0 ; i--)
        {
            if (right == left) return i+1;
            right += i;
            left -= i+1;
        }
        return -1;
    }
};