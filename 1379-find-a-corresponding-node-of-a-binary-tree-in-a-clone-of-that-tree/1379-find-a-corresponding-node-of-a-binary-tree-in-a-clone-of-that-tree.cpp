/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
   TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        if (!cloned)
            return nullptr;
        if (cloned->val == target->val)
            return cloned;
        
        TreeNode* left = getTargetCopy(original, cloned->left, target);
        if (left)
            return left;  
        
        TreeNode* right = getTargetCopy(original, cloned->right, target);
        return right; 
    }

    // TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    //     queue<TreeNode*> tree;
    //     if (cloned) tree.push(cloned);
    //     TreeNode * node;
    //     while(!tree.empty())
    //     {
    //         node = tree.front();
    //         tree.pop();
    //         if (node->val == target->val) return node;
    //         if (node->right) tree.push(node->right);
    //         if (node->left) tree.push(node->left);
    //     }
    //     return cloned;
    // }
};
 