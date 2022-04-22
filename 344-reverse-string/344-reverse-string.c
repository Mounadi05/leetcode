/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   344.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/12/31 20:11:30 by mounadi05                            *   -------   *         */
/*   Updated: 2021/12/31 20:12:23 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/*void reverseString(char* s, int sSize){
    int i = 0;
    char u;
    sSize--;
    while (i <= sSize)
    {
        u = s[sSize];
        s[sSize] = s[i];
        s[i] = u;
        i++;
        sSize--;
    }
}*/
void reverseString(char* s, int size){
    if (size < 1)
        return ;
    if (s[0] != s[size - 1])
        (s[0] += s[size - 1]),(s[size - 1] = s[0] - s[size- 1]),(s[0] -=s[size - 1]);
    reverseString(s+1, size-2);
}