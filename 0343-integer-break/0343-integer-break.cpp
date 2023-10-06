class Solution {
public:
   vector<int> memo;
   int dp(int num) 
   {
        if (memo[num] != 0) return memo[num];
        int ans = 0;
        for (int i = 2; i <= num / 2; i++)
            ans = max(ans, i * dp(num - i));
        memo[num] = ans;
        return ans;
   }
    int integerBreak(int n)
    {
        if (n <= 3) return n - 1;        
        memo = vector<int>(n + 1, 0);
        memo[2] = 2;
        memo[3] = 3;

        return dp(n);
    }
    
 
};
 





 