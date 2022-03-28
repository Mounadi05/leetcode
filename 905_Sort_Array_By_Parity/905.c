/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   905.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:46:16 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:46:28 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int* sortArrayByParity(int* arr, int size, int* rize){
    int i = -1;
    int j = 0;
    int *res = (int *)malloc(4 * size);
    *rize = size;
    int len = size - 1;
    while (++i < size)
    {
        if (arr[i] % 2 == 0)
            res[j++] = arr[i];
        else
            res[len--] = arr[i];
    }
    return (res);
}
