/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> tree;
        int max = 0;
        tree.push(root);
        while(!tree.empty())
        {
            TreeNode *current = tree.top();
            tree.pop();
            if (current->val >= low && current->val <= high)
                max += current->val;
            if (current->right) tree.push(current->right);
            if (current->left) tree.push(current->left);
        }
        return max;
    }
};