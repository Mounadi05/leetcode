/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void *inorder(struct TreeNode* root, int *tab, int *len)
{
    if(!root)
        return ;
    inorder(root->left, tab, len);
    tab[(*len)++] = root->val;
    inorder(root->right, tab, len);
}
    

int* inorderTraversal(struct TreeNode* root, int* size){
    int *tab = malloc(4004);
    int i = 0;
    inorder(root, tab, &i);
    *size = i;
    return (tab);
    
    
}