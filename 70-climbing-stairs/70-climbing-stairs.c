/*int tab[46] = {0};
int climbStairs(int n){
    if (n <= 3)
        return (n);
    if (tab[n] != 0)
        return (tab[n]);
    return tab[n] = climbStairs(n - 1) + climbStairs(n - 2);
}*/
int climbStairs(int n){
    int a1 = 0,a2 = 1;
    while(--n >= 0)
        (a2 += a1),(a1 = a2 - a1);
    return (a2);
}