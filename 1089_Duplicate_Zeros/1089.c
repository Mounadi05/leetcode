/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1089.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:00:56 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:01:07 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

void duplicateZeros(int* arr, int size){
    int i = -1;
    int a  = 1;
    int tab[size];
    while (++i < size)
        tab[i] = arr[i];
    i = 1;
    while (i < size )
    {
        
        if (tab[a - 1] == 0)
        {
            arr[i] = 0;
            i++;
        }
        if (i < size)
            arr[i] = tab[a];
        a++;
        i++;
    }
}