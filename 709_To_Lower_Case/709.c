/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   709.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:36:04 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:36:22 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

char * toLowerCase(char * s){
    int i = -1;
    while (s[++i])
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    return (s);
}
