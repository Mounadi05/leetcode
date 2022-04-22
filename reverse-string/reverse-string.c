

void reverseString(char* s, int sSize){
 static int i = 0;
    if (i > sSize - 1)
    {
         i = 0;
        return;
    }
    
    char tmp = s[i];
    s[i] = s[sSize - 1];
    s[sSize - 1] = tmp;
    i++;
    reverseString(s, sSize-1);
}