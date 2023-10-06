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
        while(l1 && l2)
        {
            if (rst + l1->val + l2->val < 10)
            {
                tmp->val =(rst + l1->val + l2->val);
                rst  = 0;
            }
            else
            {
                tmp->val = (rst + l1->val + l2->val)%10;
                rst = (rst + l1->val + l2->val)/10;
            }
            l1 = l1->next;
            l2 = l2->next;
            if (rst || l2 || l1)
            {
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
        }
        if(l1)
        {
            while(l1)
            {
                if (rst + l1->val < 10)
                {
                    tmp->val =(rst + l1->val);
                    rst  = 0;
                }
                else
                {
                    tmp->val = (rst + l1->val)%10;
                    rst = (rst + l1->val)/10;
                }
                l1 = l1->next;
                if (rst || l2 || l1)
                {
                    tmp->next = new ListNode();
                    tmp = tmp->next;
                }
            }
        }
        if(l2)
        {
            while(l2)
            {
                if (rst + l2->val < 10)
                {
                    tmp->val =(rst + l2->val);
                    rst = 0;
                }
                else
                {
                    tmp->val = (rst + l2->val)%10;
                    rst = (rst + l2->val + l2->val)/10;
                }
                l2 = l2->next;
                if (rst || l2)
                {
                    tmp->next = new ListNode();
                    tmp = tmp->next;
                }
            }
        }
        if (rst) tmp->val =rst;
        return result;
    }
};