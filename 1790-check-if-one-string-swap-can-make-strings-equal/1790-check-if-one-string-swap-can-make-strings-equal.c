void    ft_swap(char *a , char *b)
{
    char u;
    u = *a;
    *a = *b;
    *b = u;
}

int check(char a, char b)
{
    if (a == b)
        return (1);
    return(0);
}
bool areAlmostEqual(char * s1, char * s2){
    int len = strlen(s1);
    int c = 0;
    int i = 0;
    len--;
    int a = len;
    int j = 0;
    while(i <= a)
    {
        j = i;
        while(j <= len)
        {
            if (!strcmp(s1,s2))
                return (true);
            else if(check(s2[len] ,s1[j]) && s1[j] != s2[j] && s1[len] != s2[len])
            {
                c++;
                ft_swap(&s1[len], &s1[j]);
                if (c > 1)
                    return (false);
            }
            len--;
        }
        len = a;
        i++;
    }
    if (!strcmp(s1,s2))
            return (true);
    return (false);
}