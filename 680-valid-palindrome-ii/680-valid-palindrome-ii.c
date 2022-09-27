  bool validPalindrome(char * s){
    int i = -1;
    int a = 0;
    int b = 0;
    int len = strlen(s);
     int e = len;
    while(++i < --len)
    {
        if (s[i] != s[len] && a == 1 && (b = 1))
            break;
        if (s[i] != s[len] && ++a)
            i--;
    }
    i = -1;
    //a = 0;
    while(b != 0 &&  ++i < --e)
    {
        if (s[i] != s[e] && a > 1)
            return false;
        if (s[i] != s[e] && ++a)
            e++;
    }
    return (true);
}