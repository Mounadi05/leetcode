/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   21.c                                               :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/12/31 19:55:56 by mounadi05                            *   -------   *         */
/*   Updated: 2021/12/31 19:56:04 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode tmp = {0,NULL};
    struct ListNode *p = &tmp;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            p->next = list1;
            list1=list1->next;
        }
        else
        {
            p->next = list2;
            list2=list2->next;
        }
        p = p->next;   
    }
    if (list1)
        p->next = list1;
    if (list2)
        p->next = list2;
    return(tmp.next);
}
