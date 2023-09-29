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
    int pairSum(ListNode* head) {
        int Max = -1;
        stack<int> twin;
        ListNode  *tmp = head;
        int i = 0;
        while(tmp && ++i) tmp = tmp->next;
        int mid = i/2;
        i = 0;
        for(int i = 0;head;i++)
        {
            if (i < mid)
                twin.push(head->val);
            else if (!twin.empty())
            {
                Max = max(Max,head->val + twin.top());
                twin.pop();
            }
             head = head->next;
        }
        return Max;
    }
};