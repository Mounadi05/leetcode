int lengthOfLastWord(char * s){

        int a;
        int i;
        int j;
    int y;

    i = 0;
    j = 0;
    a = 0;
    y = 0;
        while (s[i] != '\0')
        {
                if (s[i] != ' ')
                        a = 0;
                i++;

        }
        i = 1;
        while (s[i] != '\0')
        {
            if (s[i - 1] == ' ' && s[i] != ' ')
                a = i;
            i++;
        }
        j = a;
        while (s[a] != '\0')
        {
            if(s[a] == ' ')
                y++;
            a++;
        }
        return a - j - y;
}
