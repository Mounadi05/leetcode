/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/25 09:47:30 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/25 09:48:09 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int* twoSum(int* arr, int size, int target, int* rize)
{
    int i = -1;
    int j = -1;
    *rize = 2;
    int *tab = malloc(8);
    while (++i < size)
    {
        j = i;
        while (++j < size)
            if (arr[i] + arr[j] == target)
            {
                tab[0] = i;
                tab[1] = j;
                break;
            }
    }
    return (tab);
}
