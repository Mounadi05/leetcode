/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1512.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:30:22 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:30:41 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int numIdenticalPairs(int* arr, int size){
    int i = -1;
    int j = -1;
    int a = 0;
    while (++i < size)
    {
        j = i;
        while(++j < size)
            if (arr[i] == arr[j] && i < j)
                a++;
    }
    return (a);
}
