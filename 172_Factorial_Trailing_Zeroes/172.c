/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   172.c                                                              *    :+:   :+:    *       */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/09/04 19:15:04 by mounadi05                            *   -------   *         */
/*   Updated: 2021/09/04 19:15:06 by mounadi05                              ***********           */
/*                                                                                                */
/* ********************************************************************************************** */

 int trailingZeroes(int n){
     if (n < 5)
      return 0;
     return ((n / 5) + trailingZeroes(n / 5));
}
