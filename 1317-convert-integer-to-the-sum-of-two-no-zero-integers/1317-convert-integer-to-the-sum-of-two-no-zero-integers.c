
 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int check_zero(int n)
{
    int len = 1;
    int a = n;
    while (n > 9 && len++)
        n /=10;
    char *tab= malloc(len + 1);
    sprintf(tab, "%d",a);
    a = 0;
    while(tab[a])
        if(tab[a++] == '0')
            return (0);
    return (1);
}
int* getNoZeroIntegers(int n, int *size){
    int *tab = malloc(8);
    int a = 0;
    while (++a <= n)
        if (check_zero(a) && check_zero(n - a))
        {
                tab[0] = a;
                tab[1] = n-a;
                break;
        }
    *size = 2;
    return (tab);
}