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
 * @param {number} key
 * @return {TreeNode}
 */
function findMin(node)
{
    var root = node;
    while(root.left !== null) root = root.left;
    return root;
}
var deleteNode = function(root, key) {
         if(root === null) return root;
         if (root.val > key) root.left = deleteNode(root.left,key);
        else if (root.val < key) root.right =  deleteNode(root.right,key);
        else
        {
            if(root.left === null && root.right === null) root = null;
            else if (root.left === null) root = root.right;
            else if (root.right === null) root = root.left;
            else
            {
                var tmp = findMin(root.right);
                root.val = tmp.val;
                root.right = deleteNode(root.right,tmp.val);
            }
         }
   return root;
    
};