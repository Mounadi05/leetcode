/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
function countLeaf(root,leaf)
{
    if (!root) return;
    if (!root.right  && !root.left )
    {
        leaf.push(root.val);
        return;
    }
    countLeaf(root.right,leaf);
    countLeaf(root.left,leaf);
}
var leafSimilar = function(root1, root2) {
    var leaf1 = [];
    var leaf2 = [];
    countLeaf(root1,leaf1);
    countLeaf(root2,leaf2);
     for(let i = 0; i < leaf1.length && i < leaf2.length ;i++)
        if (leaf1[i] != leaf2[i])
            return false;
    return leaf1.length == leaf2.length;

};