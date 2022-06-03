 bool canConstruct(char * r, char * m){
    int i,j;
    j = -1;
    i = 0;
    int len = strlen(m);
    while(++j < len)
        if (r[i] == m[j] && ++i)
            j = m[j] = -1;
    return (!r[i]);
}