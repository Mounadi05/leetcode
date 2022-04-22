
char * reversePrefix(char * word, char ch){
    int i = 0;
    char *str = malloc(strlen(word) + 1);
    int j = 0;
    while(word[i])
    {
        if (word[i] == ch)
        {
            j = i;
            i = 0;
            while (j >= 0)
                str[i++] = word[j--];
            while(word[i])
            {
                str[i] = word[i];
                i++;
            }
            str[i] = '\0';
            return (str);
        }
        i++;
    }
    return (word); 
}