/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1365.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 18:16:34 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 18:16:45 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int* smallerNumbersThanCurrent(int* arr, int size, int* rize){
    int i = -1;
    int j = -1;
    int a = 0;
    int *tab = malloc(4 * size);
    while (a < size)
        tab[a++] = 0;
    a = 0;
    while (++i < size)
    {
        j = -1;
        while(++j < size)
            if (j != i && arr[j] < arr[i])
                tab[a]++;
        a++;
    }
    *rize = size;
    return (tab);   
}
