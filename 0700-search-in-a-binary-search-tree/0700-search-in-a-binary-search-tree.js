/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} val
 * @return {TreeNode}
 */
var searchBST = function(root, val) {
    while(root)
    {
        if (root.val == val) return root;
        else if(root.val < val)
           root = searchBST(root.right,val);
        else root = searchBST(root.left,val); 
    }
    return null;
};