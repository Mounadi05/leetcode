

bool canConstruct(char * r, char * m){
    int i,j;
    j = -1;
    i = 0;
    int len = strlen(m);
    while(++j < len)
        if (r[i] == m[j] && ++i)
        {
            m[j] = -2;
            j = -1;
        }
    if (!r[i])
        return (1);
    return (0);
}