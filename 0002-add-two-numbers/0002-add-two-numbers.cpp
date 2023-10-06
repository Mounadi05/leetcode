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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * tmp =  new ListNode();
        ListNode *result = tmp;
        int rst = 0;
        int sum  = 0;
        while(l1 || l2 || rst)
        {
            sum = rst,rst = 0;
            if (l1)
            {
                sum += l1->val;
                rst = 0;
                l1 = l1->next;
            }
            if(l2) 
            {
                sum += l2->val;
                l2 = l2->next;
            }
            if (sum > 9)
            {
                int carry = sum;
                sum = carry % 10;
                rst = carry / 10; 
            }
            tmp->val = sum;
            if (rst || l2 || l1)
            {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
        }
        return result;
    }
};