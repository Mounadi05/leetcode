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
//      int countNodes(TreeNode* node, int max_val) {
//         if (!node) return 0;

//         int count = (node->val >= max_val) ? 1 : 0;

//         max_val = max(max_val, node->val);

//         count += countNodes(node->left, max_val);
//         count += countNodes(node->right, max_val);

//         return count;
//     }
//     int goodNodes(TreeNode* root) {
//         return countNodes(root, root->val);

//     }
     int goodNodes(TreeNode* root) {
        stack<TreeNode*> tree;
        stack<int> maxValue;
        tree.push(root);
        maxValue.push(INT_MIN);
        int count = 0;
        while(!tree.empty())
        {
            TreeNode* current = tree.top();
            int value = maxValue.top();
            tree.pop();
            maxValue.pop();
            count += (current->val >= value);
            if(current->left) {
                maxValue.push(max(value, current->val));
                tree.push(current->left);
            }
            if(current->right) {
                maxValue.push(max(value, current->val));
                tree.push(current->right);
            }
        }
        return count;

    }
};