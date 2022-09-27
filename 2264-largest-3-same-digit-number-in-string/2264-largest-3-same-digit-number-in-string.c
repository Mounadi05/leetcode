

char * largestGoodInteger(char * num){
    char *str = malloc(4);
    str[0] = '\0';
    int a = 0;
    for(int i = 0;num[i];i++)
        if (num[i]  > a && i - 1 >= 0 && num[i + 1] && num[i] == num[i + 1] && num[i]==num[i - 1])
            str[0] = str[1] = str[2] = num[i],str[3] = '\0',a = num[i];
    return str;
}