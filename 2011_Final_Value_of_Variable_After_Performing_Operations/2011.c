/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   2011.c                                             :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 18:26:43 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 18:27:08 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

#include <string.h>

int finalValueAfterOperations(char ** opera, int size){
    int i = 0;
    int a = 0;
    while (i < size)
    {
        if(!strcmp(opera[i],"X++") || !strcmp(opera[i],"++X"))
            a++;
        else if(!strcmp(opera[i],"X--") || !strcmp(opera[i],"--X"))
            a--;
        i++;
    }
    return (a);

}
