#include <stdlib.h>
bool isPalindrome(int x){
        char *tab;
        int i = 0;
        int v;
        int a = 0;
        int ng = 1;
        if (x == -2147483648)
            return false;
        if (x< 0)
        {
                ng = -ng;
                x = -x;
                a = 1;
        }
        v = x;
        while (v > 0)
        {
                v /= 10;
                a++;
        }
        tab = (char *)malloc(sizeof(char ) * a + 1);
        if (ng == -1)
        {
                tab[i] = '-';
                i++;
        }
        while (x > 0)
        {
                tab[i] = x % 10;
                x /= 10;
                i++;
        }
        tab[i] = '\0';
        i = 0;
        --a;
        while (a >= 0)
        {
                if(tab[i] == tab[a])
                {
                        i++;
                        a--;
                }
                else
                        return false;
        }
        return true;
}
