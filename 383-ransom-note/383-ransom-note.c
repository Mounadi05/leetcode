 bool canConstruct(char * r, char * m){
    int j = -1;
    int len = strlen(m);
    while(++j < len)
        if (*r == m[j] && r++ && (j = m[j] = -1));
    return (!*r);
}