

bool canConstruct(char * r, char * m){
    int i,j;
    j = i = 0;
    int len = strlen(m);
    while(j < len)
    {
        if (r[i] == m[j])
        {
            i++;
            m[j] = -2;
            j = -1;
        }
        j++;
    }
    if (!r[i])
        return (1);
    return (0);
}