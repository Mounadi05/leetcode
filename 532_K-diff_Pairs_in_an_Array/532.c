/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   532.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:30:54 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:31:37 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int v(int n)
{
    return (n > 0 ? n : -n);
}
int check(int *tab , int val)
{
    int i= -1;
    while (++i < 10)
        if (tab[i] == val)
            return (0);
    return (1);
}
int find(int *arr, int size, int p,int n,int k,int z, int *a , int *tab,int *t)
{
    int i = -1;
    if (*t == 0 && k == 0 && p == 0)
    {
        (*t)++;
        return (1);
    }
    if (k == p && check(tab,k))
    {
        tab[*a] = k;
        (*a)++;
        return (1);
        
    }
    i = -1;
    while (++i < size)
        if ((arr[i] == p  && i < n )||(arr[i] == k && i < z))
            return (0);
    return (1);
}
int findPairs(int* arr, int size, int k){
    int i = -1;
    int j = -1;
    int a = 0;
    int tab[10];
    int z = 0;
    int q = 0;
    while (++i < size)
    {
        j = i;
        while (++j < size)
            if ( i < j  && v(arr[i] - arr[j]) == k && find(arr,size,arr[j],j,arr[i],i,&z,tab,&q))
                a++;
    }
    return (a);
}
