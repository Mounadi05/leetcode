/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   136.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/12/31 20:01:12 by mounadi05                            *   -------   *         */
/*   Updated: 2021/12/31 20:01:40 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

 
int singleNumber(int* nums, int numsSize)
{
 
    int a = nums[0];
    int i = 0;
    while (++i < numsSize)
        a  ^= nums[i];
    return(a);
}
