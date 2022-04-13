
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* searchBST(struct TreeNode* root, int val){

    if (!root || root->val == val)
        return root;
    if (root->val > val)
     root = searchBST(root->left,val);
    else
      root = searchBST(root->right,val);
    return root;
}