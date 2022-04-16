 int searchInsert(int* num, int size, int t){
    int i = size/2;
    if (num[size - 1] < t)
        return (size);
    while(i < size - 1 && i > 0 )
    {
        if(num[i] == t || (num[i-1] < t && num[i] > t))
            return (i);
        else if (num[i] < t)
            i++;
        else
            i--;
    }
    if (i < 0 || num[0] >= t)
        return (0);
    return(i);
}