int lengthOfLongestSubstring(char* s) {
    int i, j, l, k, n;
    char c;
    int tab[128] = { 0 };
    char *p;
    i = 0;
    j = 0;
    l = 0;
    k = 0;
    n = 0;
    while (s[i]) 
    {
        n ++;
        c = s[i];
        l = i - tab[c] + 1;
        tab[c] = i + 1;
        if (n < l)
            n = n;
        else
            n = l;
        if (k > n)
            k = k;
        else
            k = n;
        i++;
    }
    
    return k;
}
