

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    int i = 0;
    *returnSize = n;
    char **tab = malloc(sizeof(char *) * (n + 1)); 
    while(++i <= n)
    { 
        if (!(i % 3) && !(i % 5))
            tab[i-1] =strdup("FizzBuzz");
        else if (!(i % 5))
            tab[i-1] =strdup("Buzz");
        else if (!(i % 3))
            tab[i-1] = strdup("Fizz");
        else
        {
            tab[i-1]=malloc(15);
            sprintf(tab[i-1], "%d", i);
        }
    }
    tab[i-1] = 0;
    return(tab);
}