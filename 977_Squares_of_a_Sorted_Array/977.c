/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   977.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/28 16:48:54 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/28 16:49:06 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int i = 0;
    int size = numsSize - 1;
    int s = numsSize;
    int *tab;
    tab = (int *)malloc(sizeof(int) * numsSize);
    while (--s >= 0)
    {
        if ( (nums[i] * nums[i] ) > (nums[size] * nums[size] ))
        {
            tab[s] = (nums[i] * nums[i]);
            i++;
        }
        else
        {
            tab[s] = (nums[size] * nums[size]);
                size--;
        }
    }
    *returnSize = numsSize;
    return(tab);
}

