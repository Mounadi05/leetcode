bool areAlmostEqual(char * s1, char * s2){
    int len = strlen(s1);
    int c = 0;
    int i = -1;
    int a = --len;
    while(++i < a)
    {
        while(i <= len)
        {
            if (!strcmp(s1,s2))
                return (true);
            else if((s2[len] == s1[i]) && s1[i] != s2[i] && s1[len] != s2[len])
            {
                c++;
                (s1[len] ^= s1[i]),(s1[i] ^= s1[len]),(s1[len] ^= s1[i]);
                if (c > 1)
                    return (false);
            }
            len--;
        }
        len = a;
    }
    if (!strcmp(s1,s2))
            return (true);
    return (false);
}