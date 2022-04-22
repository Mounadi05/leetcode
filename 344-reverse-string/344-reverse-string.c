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

/*void reverseString(char* s, int size){  
    int i = -1;
    while (++i < size--)
        if (s[i] != s[size])
            (s[i] += s[size]),(s[size] = s[i] - s[size]),(s[i] -=s[size]);
}*/
void reverseString(char* s, int size){
    if (size < 1)
        return ;
    if (s[0] != s[size - 1])
        (s[0] += s[size - 1]),(s[size - 1] = s[0] - s[size- 1]),(s[0] -=s[size - 1]);
    reverseString(s+1, size-2);
}