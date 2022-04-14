

double average(int* s , int size){
    int i = -1;
    double a = 0;
    int j;
    while (++i < size)
    {
        j = i;
        while(++j < size)
        {
            if (s[i] > s[j])
            {
                a = s[j];
                s[j] = s[i];
                s[i] = a;                 
            }
        }
    }
    i = 1;
    a = 0;
    while (i < size - 1)
        a = a + s[i++];
    return (a/(size-2));
}