/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   941.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:47:00 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:47:14 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */


bool validMountainArray(int* arr, int size){
    int i = 0;
    while (++i < size)
        if (arr[i - 1] >= arr[i])
            break;
    if (i == 1 || i == size)
        return (false);
    while (i < size)
    {
        if (arr[i - 1] <= arr[i])
            return(false);
        i++;
    }
    return (true);

}
