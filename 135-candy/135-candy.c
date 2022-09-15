 int candy(int* ra, int size){
    int a = 0;
    int s = size -1;
    int *r = malloc(4 * size);
    int *l = malloc(4 * size);
    l[0] = 1;
    r[size-1] = 1;
    for(int i = 1; i < size ; i++)
       l[i] = ra[i] > ra[i - 1] ? l[i - 1] + 1 :  1;
    for(int i = size - 2 ; i >=0 ; i--)
        r[i] = ra[i] > ra[i+1] ? r[i + 1] + 1 : 1;
    for(int i = 0 ; i < size ; i++)
       a += r[i] > l[i] ? r[i] :l[i];
    return a;
}