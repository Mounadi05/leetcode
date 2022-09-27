 bool validPalindrome(char * s){
    int i = -1;
    int a = 0;
    int b = 0;
    int len = strlen(s);
    while(++i < --len)
    {
        if (s[i] != s[len] && a == 1 && (b = 1))
            break;
        if (s[i] != s[len] && ++a)
            i--;
    }
    i = -1;
    len = strlen(s);
    a = 0;
    while(++i < --len)
    {
        if (s[i] != s[len] && a == 1 && b == 1)
            return false;
        if (s[i] != s[len] && ++a)
            len++;
    }
    return (true);
}