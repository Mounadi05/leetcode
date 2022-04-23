char * truncateSentence(char * s, int k){
    int i = 0;
    while (s[i] && k > 0)
        if (s[i++] == ' ')
            k--;
    if (s[i])
        s[i-1] = '\0';
    return (s);
}
