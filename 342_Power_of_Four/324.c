/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   324.c                                                              *    :+:   :+:    *       */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/09/04 19:25:24 by mounadi05                            *   -------   *         */
/*   Updated: 2021/09/04 19:25:38 by mounadi05                              ***********           */
/*                                                                                                */
/* ********************************************************************************************** */

bool isPowerOfFour(int n){
 while (n % 4 == 0 && n != 0)
        n /= 4;
    if (n == 1)
        return true;
    else
        return false;
}
