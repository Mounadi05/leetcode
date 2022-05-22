

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* arr, int size, int* rize){
    int i = -1;
    int a = 0;
    int y = 0;
    *rize = (size * 2);
    int *tab = malloc(4 * (size * 2));
    while(++i < size && y < (size * 2))
    {
        tab[y++] =  arr[i];
        if (i == size - 1)
            i = -1;
    }
    return(tab);
}