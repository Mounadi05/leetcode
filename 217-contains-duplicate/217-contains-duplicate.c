 
int cmp( const void *a ,const void *b)
{
    return ( *(int *)a - *(int *)b );
}
bool containsDuplicate(int* num, int size){
   qsort(num, size, sizeof(int), cmp);
    while(--size)
        if (num[size] == num[size - 1])
            return (true);
    return (false);
}