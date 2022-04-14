
int check_even(int n)
{
    int i = 0;
    int a = 0;
    int len = snprintf(NULL, 0, "%d", n);
    char* str = malloc(len + 1);
    sprintf(str,"%d",n);
    while(str[i])
        a = a + str[i++] - 48;
    if (!(a%2))
        return (1);
    return (0);
}
int countEven(int num){
    int i = 0;
    int a = 0;
    while(++i <= num)
        if (check_even(i))
            a++;
    return (a);
}