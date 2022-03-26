/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   171.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 08:42:00 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 08:42:23 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int titleToNumber(char * str){
    int i = 0;
    int u = 0;
    while (str[i])
        u = (u * 26) + (str[i++] - 64);
    return(u);
}
