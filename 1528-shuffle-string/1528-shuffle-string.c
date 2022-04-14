char * restoreString(char * s, int* in, int size){
    char *res = malloc(size + 1);
    int i = -1;
    while(++i < size)
        res[in[i]] = s[i];
    res[size] = '\0';
    return (res);
}