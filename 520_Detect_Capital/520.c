/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   520.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 09:06:04 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 09:06:16 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

bool detectCapitalUse(char * word){
    int i = 0;
    int c = 0;
    if (word[i + 1] && word[i + 1] >= 'A' && word[i + 1] <= 'Z')
        c = 32 * (word[i] >= 'A' && word[i] <= 'Z');
    while (word[++i] && word[i] >= 'a' - c && word[i] <= 'z' - c);
    if (!word[i])
        return (true);
    return (false);
}