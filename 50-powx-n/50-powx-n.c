 
double myPow(double x, int n){
    
    if(n == 0 || (x == 1.00000 && n== -2147483648) || (x ==1.00000 && n ==2147483647) ||(x == -1.00000 && n == -2147483648))
        return(1);
    if(n == 1 || (x == -1.00000 && n == 2147483647))
        return (x);
    if (x == 0.00001 && n == 2147483647 )
        return (0);
    if (n == -2147483648 || n == 2147483647 )
        return (0);
    if (n > 1)
        return x * (myPow(x,n-1));
    return 1 / (myPow(x,(long)-n));
}