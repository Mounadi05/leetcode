void reverseString(char* s, int size){
    char u;
    if (size < 1)
        return ;
    u = s[0];
    s[0] = s[size - 1];
    s[size - 1] = u;
    reverseString(s+1, size-2);
}