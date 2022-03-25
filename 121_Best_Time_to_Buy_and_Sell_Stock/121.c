/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   121.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/25 10:20:29 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/25 10:20:46 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int maxProfit(int* prices, int size){
    int i = -1;
    int min = prices[0];
    int max = 0;
    while (++i < size)
    {  
        if (prices[i] < min)
            min = prices[i];
        if ( max < prices[i] - min)
            max = prices[i] - min;
    }
    if (max > 0)
        return(max);
    return (0);
}
