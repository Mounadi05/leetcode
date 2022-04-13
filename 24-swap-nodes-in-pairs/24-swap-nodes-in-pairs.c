/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if (!head || !head->next)
        return (head);
    int a = 0;
    a = head->val;
    head->val = head->next->val;
    head->next->val = a;
    swapPairs(head->next->next);
    return (head);
}