/* ********************************************************************************************** */
/*                                                                                                */
/*                                                                       ******     ******        */
/*   876.c                                              :+:      :+:    :+:   */
/*                                                                     *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                        */
/*                                                                       *               *        */
/*   Created: 2021/12/31 19:48:28 by mounadi05                            *   -------   *         */
/*   Updated: 2021/12/31 19:48:53 by amounadi         ###   ########.fr       */
/*                                                                                                */
/* ********************************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){

    struct ListNode *tmp = NULL;
    int i = 0;
    int a = 0;
    
    tmp = head;
    while (head != NULL)
    {
        head = head->next;
        i++;
    }
    i = i/2;
    while (a < i)
    {
        a++;
        tmp = tmp->next;
    }
    return(tmp);
}
