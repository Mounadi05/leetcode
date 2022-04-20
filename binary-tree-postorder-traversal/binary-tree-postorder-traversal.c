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
void    postorder(struct TreeNode* root, int *i, int *tab)
{
    if (!root)
        return ;
    postorder(root->left, i,tab);
    postorder(root->right, i,tab);
    tab[(*i)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* size){
    int *tab = malloc(404);
    int i = 0;
    postorder(root, &i, tab);
    *size = i;
    return (tab);

}