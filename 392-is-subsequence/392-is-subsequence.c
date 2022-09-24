  
bool isSubsequence(char * s, char * t){
    for(int j = 0 ; t[j] ; j++)
        if (*s && *s == t[j]  && s++);
    return !*s;
}