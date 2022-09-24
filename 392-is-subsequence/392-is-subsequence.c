 
bool isSubsequence(char * s, char * t){
    int a = 0;
    int i = 0;
    for(int j = 0 ; t[j] ; j++)
        if (s[i] == t[j] && s[i])
            i++;
    if (!s[i])return true;
    return false;
}