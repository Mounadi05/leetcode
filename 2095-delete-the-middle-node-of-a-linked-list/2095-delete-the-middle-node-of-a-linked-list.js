/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteMiddle = function(head) {
    var tmp = head;
    var lent = -1;
    for(;tmp;lent++) tmp = tmp.next;
    if (lent == 0) return null;
    tmp = head;
    for(let i = 1; i < Math.ceil(lent/2) ;i++) tmp = tmp.next;
    var delNode = tmp.next.next
    tmp.next = delNode;
    return head;
};