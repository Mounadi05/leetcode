

int strStr(char * haystack, char * needle){
    int i = 0;
    int j = 0;
    if (!needle )
        return (0);
    while(haystack[i])
    {
        while(haystack[i + j] && needle[j] && (haystack[i + j] == needle[j]))
              j++;
        if (!needle[j])
            return (i);
        j = 0;
        i++;
    }
    return (-1);
}