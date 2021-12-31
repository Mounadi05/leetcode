/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   206.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/12/31 20:04:48 by mounadi05                            *   -------   *         */
/*   Updated: 2021/12/31 20:05:08 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p1 = NULL;
    struct ListNode *p2 = NULL;
    while(head)
    {
        p1 = head->next;
        head->next = p2;
        p2 = head;
        head = p1;
    }
    return (p2);
}
