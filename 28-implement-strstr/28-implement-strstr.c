
 int strStr(char * haystack, char * needle){
    int i,j = i = -1;
    while(haystack[++i] && (j = -1))
    {
        while(haystack[i + ++j] && needle[j] && (haystack[i + j] == needle[j]));
        if (!needle[j])
            return (i);
    }
    return (-1);
}