
 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int check_zero(int n)
{
    int a = 0;
    char *tab= malloc(5);
    sprintf(tab, "%d",n);
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