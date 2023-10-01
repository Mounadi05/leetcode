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
     int countNodes(TreeNode* node, int max_val) {
        if (node == nullptr)
            return 0;

        int count = (node->val >= max_val) ? 1 : 0;

        max_val = max(max_val, node->val);

        count += countNodes(node->left, max_val);
        count += countNodes(node->right, max_val);

        return count;
    }
    int goodNodes(TreeNode* root) {
        return countNodes(root, root->val);

    }
};