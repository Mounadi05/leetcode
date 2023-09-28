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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* result = head;
        ListNode* tmp = result;
        ListNode* tmp1 = head->next;
        ListNode* tmp2 = tmp1;
        int i = -1;
        head = head->next->next;
        while(head)
        {
            i++;
            if (!(i%2))
            {
                result->next = head;
                result = result->next;
            }
            else
            {
                tmp1->next = head;
                tmp1 = tmp1->next;
            }
            head= head->next;
        }
        tmp1->next = NULL;
        result->next = tmp2;
        return tmp;
 
    }
};
  
















