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
int* preorderTraversal(struct TreeNode* root, int* size){
    int *tab = malloc(101 * 4);
    struct TreeNode** tree = malloc(sizeof(struct TreeNode*) * 51);
    int i = 0;
    int a = 1;
    //tree[1] = root->right; 
    while(root)
    {
        while(root)
        {   
            if(root->right)
                tree[a++] = root->right;   
            tab[i++] = root->val;
            root = root->left;
        }
        if(a > 1)
             root = tree[--a];
    }
    *size = i;
    return (tab);
}