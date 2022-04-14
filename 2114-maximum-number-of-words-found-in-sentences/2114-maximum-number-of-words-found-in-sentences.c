

int mostWordsFound(char ** s, int size){
    int i = -1, j = 0, a = 0,b = 0;
    while (++i < size)
    {
        j = 0;
        while (s[i][j])
            if (s[i][j++] == ' ')
                a++;
        if (a > b)
            b = a;
        a = 0;
    }
    return (b + 1);

}