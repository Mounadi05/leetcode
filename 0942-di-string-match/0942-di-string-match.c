/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char * s, int* returnSize){
    int *str = malloc((strlen(s) + 1) * 4);
    *returnSize = strlen(s)+1;
    int start = 0;
    int end = strlen(s);
    for(int i = 0; i < *returnSize;i++)
        if (s[i] == 'I') str[i] = start++;
        else str[i] = end--;
    return str;
    
}