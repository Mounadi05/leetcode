int getSum(int a, int b){
    int sum,carry;
    while(a)
    {
        sum = a^b;
        carry =(unsigned)(a&b) << 1;
        b = sum;
        a = carry;
    }
    return (b);
}
