

int reverse(int x){

    int a;
    int ng = 1;
    a = 0;
    if (x < 0)
    {
        if (x == -2147483648)
            return 0;
        ng = -ng;
        x = -x;    
    }
    while (x > 0)
    {
        if (a > 214748364)
            return 0;
        else
            a = a * 10 + ( x % 10);
        x /= 10;
    }
    return (a * ng);
}
