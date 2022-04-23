
int cmp( const void *a ,const void *b)
{
    return ( *(int *)a - *(int *)b );
}
bool containsDuplicate(int* num, int size){
    int i = 0;
   qsort(num, size, sizeof(int), cmp);
    while(i < size - 1)
        if (num[i] == num[++i])
            return (true);
    return (false);
}