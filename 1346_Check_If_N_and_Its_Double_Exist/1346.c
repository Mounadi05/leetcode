/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1346.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:46:07 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:46:40 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */


bool checkIfExist(int* arr, int size){
    int i = 0;
    int j = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (i != j && 2 * arr[i] == arr[j])
                return (true);    
            j++;
        }
        i++;
    }
    return (false);
}
