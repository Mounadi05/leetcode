

bool isPalindrome(char * s){
    char *str = malloc(strlen(s)+1);
    int a= 0;
    for(int i = 0; s[i] ; i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            str[a++] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] +('a' - 'A'): s[i];
    str[a] = '\0';
    a = strlen(str)-1;
    for(int i = 0; i <= a ; i++ ,a--)
        if (str[i] != str[a])
            return false;
        return true;
}