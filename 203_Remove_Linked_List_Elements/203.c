/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   203.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2022/03/26 08:43:23 by mounadi05                            *   -------   *         */
/*   Updated: 2022/03/26 08:43:36 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){

   if(!head)
       return (NULL);
    if (head->val == val)
        return (removeElements(head->next ,val));
    else
    {
        head->next = (removeElements(head->next ,val));
        return head;
    }
}
