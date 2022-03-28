/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   2114.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 18:24:42 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 18:25:00 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int len(char *str)
{
    int i = -1;
    int a = 0;
    while (str[++i])
        if (str[i] == ' ')
            a++;
    return (a + 1);
}
int mostWordsFound(char **word, int size){
    int i = -1;
    int a = 0;
    while(++i < size)
       if (a < len(word[i]))
           a = len(word[i]);
    return (a);
}
