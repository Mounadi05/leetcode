/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1281.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:18:17 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:18:29 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */


int subtractProductAndSum(int n){
    int i = 0;
    int y = 1;
    while (n > 0)
    {
        i = i + (n % 10);
        y = y * (n % 10);
        n = n / 10;
    }
    return (y - i);
}
