struct ListNode* mergeNodes(struct ListNode* head){
    if (!head)
        return (head);
    int val = 0;
    struct ListNode* tmp = head;
    struct ListNode* tmp1 = tmp;
    while(head)
    {
        if (head->val != 0)
            val += head->val;
        else if (val != 0)
        {
            tmp->val = val;
            tmp->next = head->next;
            tmp = tmp->next;
            val = 0;
        }
        head = head->next;
    }
    if (tmp)
        tmp->next = NULL;
    return (tmp1);
    
}