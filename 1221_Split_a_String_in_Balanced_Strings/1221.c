/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1221.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:03:50 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:04:07 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int balancedStringSplit(char * s){
    int i = -1;
    int a = 0;
    int c = 0;
    while(s[++i])
    {
        if (s[i] == 'R') 
            a++;
        if (s[i] == 'L')
            a--;
        if (a == 0)
            c++;
    }
    return (c);
}
