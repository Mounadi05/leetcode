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

void inorder(struct TreeNode * root, int * node, int * l)
{
    if(root == NULL) return;
    inorder(root->left, node, l);
    node[(*l)++] = root->val;
    inorder(root->right, node, l);
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
