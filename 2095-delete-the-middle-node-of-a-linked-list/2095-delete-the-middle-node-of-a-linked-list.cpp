/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *tmp = head;
        int lent = 0;
        for(;tmp;lent++) tmp = tmp->next;
        if (lent == 1) return NULL;
        ListNode *del = head;
        for(int i = 1; i < lent/2 && del;i++)
                del = del->next;
        ListNode *next = (del)->next->next;
        del->next  = next;
        return head;
    }
};