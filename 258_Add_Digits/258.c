/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   258.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 08:54:36 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 08:55:24 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int addDigits(int num){
    return (((num % 9) ? num % 9 : 9) * (num != 0));    
}
