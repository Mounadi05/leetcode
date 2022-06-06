bool hasAlternatingBits(int n){
    int i = 32;
    int a,b,c;
    a = b = c = 0;
    while(--i >= 0)
    {
        if (((n >> i) & 01) && ++a && ++c)
            b = 0;
        if (!((n >> i) & 01) && c && ++b)
            a = 0;
        if (a >= 2 || b >= 2)
            return (false);
    }
    return (true);
}