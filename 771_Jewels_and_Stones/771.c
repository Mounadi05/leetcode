/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   771.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:45:28 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:45:40 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int numJewelsInStones(char * ju, char * s){
    int i = -1;
    int j = -1;
    int a = 0;
    while (ju[++i])
    {
        j = -1;
        while(s[++j])
            if (ju[i] == s[j])
                a++;
    }
    return (a);
}
