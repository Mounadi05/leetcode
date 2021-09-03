
int myAtoi(char * s){
    int i;
    int ng;
    int res;

    i = 0;
    ng = 1;
    res = 0;
    while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
       i++;
    if (s[i] == '+' || s[i] == '-' )
    {
        if (s[i] == '-')
            ng = -ng;
        i++;
    }

    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        if (ng == 1 && res >= 214748364 && (s[i] - '0') > 7)
            return (2147483647);
        if (ng == 1 && res > 214748364)
            return (2147483647);
        if (ng == -1 && res >= 214748364 && (s[i] - '0') >= 8)
            return (-2147483648);
        if (ng == -1 && res > 214748364)
            return (-2147483648);
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return (ng * res);

}
