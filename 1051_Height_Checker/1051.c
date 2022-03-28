/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1051.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:00:08 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:00:25 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */


int heightChecker(int* arr, int size){
    int i = -1;
    int j = -1;
    int a = 0;
    int u;
    int *res = (int *)malloc(4 * size);
    while(++j < size)
        res[j] = arr[j];
    while (++i < size - 1)
     {
        j = -1;
        while (++j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                u = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = u;
            }
        }
    }
    i = -1;
    while (++i < size)
        if (arr[i] != res[i])
            a++;
    return (a);

}
