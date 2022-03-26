/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   448.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 09:04:13 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 09:04:27 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

 int* findDisappearedNumbers(int* arr, int size, int* rize){
    int i = -1;
    int a = 0;
    int *res =(int *)(malloc(4 * size));
    while (++i < size)
        res[arr[i]-1] = arr[i];
    i = -1;
    while (++i < size)
        if (res[i] > size || res[i] <= 0)
            arr[a++] = i+1;
    *rize = a;
    return (arr);
} 
 

