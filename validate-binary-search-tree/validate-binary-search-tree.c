/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int check(struct TreeNode* root,long min , long max)
{
    if (!root)
        return 1;
    if (root->val <= min || root->val >= max)
        return (0);
    return ( check(root->left, min ,root->val) && check(root->right ,root->val,max));
}
bool isValidBST(struct TreeNode* root){
    struct TreeNode* r;
    long max = 4294967295;
    long  min = -4294967296;
    if (check(root, min,max))
        return (true);
    return (false);
}


