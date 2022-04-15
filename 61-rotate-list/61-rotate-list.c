/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){  
    struct ListNode* tmp = head;
    int i = 0;
    while(tmp && ++i)
        tmp = tmp->next;
    if (k > i && head)
        k = k%i;
    tmp = head;
    struct ListNode* tmp1 = NULL;
    while (--k >= 0)
    {
            while(head && head->next)
            {
                if (!head->next->next)
                {
                    tmp1 = head->next;
                    head->next = NULL;
                    tmp1->next = tmp;
                    tmp = tmp1;
                }
                head = head->next;
            }
            head = tmp;
    }
    return (head);
}