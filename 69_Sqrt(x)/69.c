int mySqrt(int x){
    int i;
    i = 0;
    if (x == 1)
        return 1;
    while ( i < 46341 && (i * i) <= x)
    {
        if ((i * i) == x)
            return i;
        i += 1;
    }
    return i - 1;
}
