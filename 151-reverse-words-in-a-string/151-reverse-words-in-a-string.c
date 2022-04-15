

char * reverseWords(char * s){
    int i = 0;
    int j = 0;
    int a = strlen(s);
    char *res = malloc(a + 1);
    a--;
    int len = a;
    while (len >= 0)
    {
        while (len >= 0 && s[len] == ' ')
            len--;
        while (len >= 0 && s[len] != ' ' && ++i)
            len--;
        a = len + 1;
        while(--i >= 0)
            res[j++] = s[a++];
        res[j++] = ' ';
        i = 0;
    }
    if(res[j-2] == ' ')
        res[j-2] = '\0';
    else
        res[j-1] = '\0';
    return (res);
}