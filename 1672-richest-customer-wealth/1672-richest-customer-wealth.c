/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1672.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:22:04 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:22:23 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int maximumWealth(int** accounts, int size, int* colsize){
    int i = -1;
    int j = 0;
    int a = 0;
    int res = 0;
    while(++i < size)
    {
        j = -1;
        while (++j < colsize[i])
            a = a + accounts[i][j];
        if (res < a)
            res = a;
        a = 0;
    }
    return (res);

}
