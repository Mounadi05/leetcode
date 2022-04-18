/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


typedef struct {
    int len;
    int index;
    int *node;
} BSTIterator;

void inorder(struct TreeNode * root, int * out, int * l)
{
    if(root == NULL) return;
    inorder(root->left, out, l);
    out[(*l)++] = root->val;
    inorder(root->right, out, l);
}
BSTIterator* bSTIteratorCreate(struct TreeNode* root) {
    BSTIterator* tmp = malloc(sizeof(BSTIterator));
    tmp->node = malloc(400000);
    tmp->len  = 0;
    tmp->index = 0;
    inorder(root , tmp->node,&tmp->len);
    return (tmp);
}

int bSTIteratorNext(BSTIterator* obj) {
    return (obj->node[obj->index++]);
}

bool bSTIteratorHasNext(BSTIterator* obj) {
    if(obj->len <= obj->index)
        return (false);
    return(true);

}

void bSTIteratorFree(BSTIterator* obj) {
    free(obj->node);
    free(obj);
}



/**
 * Your BSTIterator struct will be instantiated and called as such:
 * BSTIterator* obj = bSTIteratorCreate(root);
 * int param_1 = bSTIteratorNext(obj);
 
 * bool param_2 = bSTIteratorHasNext(obj);
 
 * bSTIteratorFree(obj);
*/