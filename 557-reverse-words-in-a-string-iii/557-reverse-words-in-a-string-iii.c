

char * reverseWords(char * s){
    char *str = malloc(strlen(s) + 1);
    int a = 0;
    int j = 0;
    int i = -1;
    while(s[++i])
    {
        if(s[i] == ' ' || !s[i+1])
        {
            a = !s[i+1] ? i+1 : i;
            while(j < i)
                str[j++] = s[--a];
            str[j++] = !s[i + 1] ? s[--a] : ' ';
        }
    }
    str[j] = '\0';
    return str;
}