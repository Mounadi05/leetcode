/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   75.c                                               :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/25 10:12:00 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/25 10:21:54 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

void sortColors(int* arr, int size){
    int i = 0;
    int j = 0;
    int max = size-1;
    int tmp = 0;
    while (i <= max)
    {
        if (arr[i] == 0)
        {
            tmp = arr[i];
            arr[i++] = arr[j];
            arr[j++] = tmp;
        }
        else if (arr[i] == 1)
            i++;
        else if (arr[i] == 2)
        {
            tmp = arr[max];
            arr[max--] = arr[i];
            arr[i] = tmp;
        }
    }

}
