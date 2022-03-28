/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   1108.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 17:01:43 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 17:02:05 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

#include <string.h>
int len(char *str)
{
    int i = -1;
    int a = 0;
    while (str[++i])
        if (str[i] == '.')
            a++;
    return(a * 2);
    
}

char * defangIPaddr(char * add){
    
    int i = 0;
    int j = 0;
    char *str =(char *)malloc(strlen(add) + len(add) + 1);
    while(add[i])
    {
        if (add[i] != '.')
            str[j++] = add[i++];
        else
        {
            str[j++] = '[';
            str[j++] = add[i++];
            str[j++] = ']';
        }
    }
    str[j] = '\0';
    return(str);  
}
