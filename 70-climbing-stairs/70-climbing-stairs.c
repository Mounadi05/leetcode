int tab[46] = {0};
int climbStairs(int n){
    if (n <= 3)
        return (n);
    if (tab[n] != 0)
        return (tab[n]);
    return tab[n] = climbStairs(n - 1) + climbStairs(n - 2);
}