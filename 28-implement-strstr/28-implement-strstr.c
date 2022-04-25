

int strStr(char * haystack, char * needle){
    int i,j = i = -1;
    if (!needle)
        return (0);
    while(haystack[++i])
    {
        while(haystack[i + ++j] && needle[j] && (haystack[i + j] == needle[j]));
        if (!needle[j])
            return (i);
        j = -1;
    }
    return (-1);
}