/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var pairSum = function(head) {
    var tmp = head;
    let Max = -1,i = 0,lent = 0;
    let stack = [];
    while(tmp != null && ++i)
        tmp = tmp.next;
    let mid = i/2;
    i = 0;
    while(head != null && ++i)
    {
        if (i <= mid)
            stack[lent++] = head.val;
        else
            Max = Math.max(Max, stack[--lent]+ head.val);
        head = head.next;
    }
    return Max;
    
};