

int romanToInt(char * s){
    int a = 0;
    for(int i = 0; s[i];i++)
    {
        if (s[i] == 'I')
            a += 1;
        else if (s[i] == 'V')
             if (i > 0) a += s[i - 1] == 'I' ? 3 : 5;
            else a += 5;
        else if (s[i] == 'X')
            if (i > 0) a += s[i - 1] == 'I' ? 8 : 10;
            else a += 10;
        else if (s[i] == 'L')
            if (i > 0) a += s[i - 1] == 'X' ? 30 : 50;
            else a += 50;
        else if (s[i] == 'C')
            if (i > 0) a += s[i - 1] == 'X' ? 80 : 100;
            else a += 100;
        else if (s[i] == 'D')
            if (i > 0) a += s[i - 1] == 'C' ? 300 : 500;
            else a += 500;
        else if (s[i] == 'M')
            if (i > 0) a += s[i - 1] == 'C' ? 800 : 1000;
            else a += 1000;
    }
    return a;
}