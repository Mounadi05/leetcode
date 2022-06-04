/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if (!head)
        return head;
    if (head->next && head->val == head->next->val)
        return (deleteDuplicates(head->next));
    else
    {
        head->next =  deleteDuplicates(head->next);
        return (head);
    }
}