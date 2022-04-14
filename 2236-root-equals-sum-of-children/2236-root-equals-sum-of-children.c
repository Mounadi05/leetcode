/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool checkTree(struct TreeNode* root){
    if (root->val != root->right->val + root->left->val)
            return false;
    return (true);
    
}