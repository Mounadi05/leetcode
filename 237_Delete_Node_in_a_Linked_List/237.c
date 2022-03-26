/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   237.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 08:53:46 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 08:54:02 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    *node = *(node->next);
}
