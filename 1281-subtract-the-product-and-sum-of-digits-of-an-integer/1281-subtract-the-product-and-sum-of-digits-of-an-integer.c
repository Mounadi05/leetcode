

int subtractProductAndSum(int n){
    int i = 0;
    int y = 1;
    while (n > 0)
    {
        i = i + (n % 10);
        y = y * (n % 10);
        n = n / 10;
    }
    return (y - i);
}