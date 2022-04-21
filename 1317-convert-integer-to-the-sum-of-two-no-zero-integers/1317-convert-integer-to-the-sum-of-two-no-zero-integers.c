
 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int check_zero(int n)
{
    int len = 1;
    int a = n;
    while (n > 9)
    {
        len++;
        n /=10;
    }
    char *tab= malloc(len + 1);
    sprintf(tab, "%d",a);
    a = 0;
    while(tab[a])
        if(tab[a++] == '0')
            return (0);
    return (1);
}
int* getNoZeroIntegers(int n, int *size){
    int *tab = malloc(4000);
    int a = 1;
    int i = 0;
    int d = 0;
    int c = 0;
    while (a <= n)
    {
        if (check_zero(a))
        {
            c = a;
            d = n - c;
            if (check_zero(d) && n == c + d)
            {
                tab[0] = c;
                tab[1] = d;
                break;
            }
        }
        a++;
    }
    *size = 2;
    return (tab);
}