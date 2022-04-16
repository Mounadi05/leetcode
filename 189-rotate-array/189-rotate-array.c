

void rotate(int* num, int size, int k){
    int i = 0;
    if (size == 1)
        return ;
    if (k > size && size > 1)
        k = k%size;
    int u = size;
    int a = k;
    int* tab = malloc(size * 4);
    while (--k >= 0)
        tab[k] = num[--u];
     i = 0;
    while(a < size)
        tab[a++] = num[i++];
    while(--size >= 0)
        num[size] = tab[size];
}
   