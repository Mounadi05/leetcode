/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1299.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:02:59 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:03:15 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int* replaceElements(int* arr, int size, int* returnsize){
    int i = size -2;
    int u = 0;
    int max = arr[size - 1];
    *returnsize = size;
    while(i >= 0)
    {
        u = arr[i];
        arr[i] = max;
        if (max < u)
            max = u;
        i--;
    }
    arr[size - 1] = -1;
    return (arr);
}
