/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   657.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:35:06 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:35:30 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

bool judgeCircle(char * mo){
    int a = 0;
    int b = 0;
    int i = 0;
    while (mo[i])
    {
        if (mo[i] == 'R')
            a++;
        if (mo[i] == 'L')
            a--;
        if (mo[i] == 'U')
            b++;
        if (mo[i] == 'D')
            b--;
        i++;
    }
    if (a == 0 && b == 0)
        return (true);
    return (false);
}