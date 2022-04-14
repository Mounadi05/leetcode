

int search(int* num, int size, int t){
int i = size/2;
    int a = 0;
    while(i < size && i >= 0 && a < (size/2) + 1)
    {
        if(num[i] == t)
            return (i);
        else if (num[i] < t)
            i++;
        else
            i--;
        a++;
    }
    return(-1);
}