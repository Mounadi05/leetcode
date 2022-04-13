
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val){

    while (root && root->val != val)
    {
        if (root->val < val)
            root = root->right;
        else
            root = root->left;
    }
    return (root);
}