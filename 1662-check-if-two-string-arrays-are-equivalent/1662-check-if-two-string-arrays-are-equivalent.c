#include <string.h>

bool arrayStringsAreEqual(char ** word1, int s1, char ** word2, int s2){
    char *tab1 = malloc(s1 * 1000);
    char *tab2 = malloc(s2 * 1000);
    int i = 0;
    int j = 0;
    int a = 0;
    while (i < s1)
    {
        j = 0;
        while(word1[i][j])
            tab1[a++] = word1[i][j++];
        i++;
    }
    tab1[a] = '\0';
    i = 0;
    a = 0;
    while (i < s2)
    {
        j = 0;
        while(word2[i][j])
            tab2[a++] = word2[i][j++];
        i++;
    }
    tab2[a] = '\0';
    i = 0;
    while (tab1[i] || tab2[i])
    {
        if (tab1[i] != tab2[i])
            return (false);
        i++;
    }
    return (true);  
}