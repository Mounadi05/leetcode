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
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> res;
        stack<TreeNode *> tree;
        TreeNode *prev;
        while(root || !tree.empty())
        {
            while(root)
            {
                tree.push(root);
                root = root->left;
            }
            root = tree.top();
            if (!root->right || root->right == prev)
            {
                res.push_back(root->val);
                tree.pop();
                prev = root;
                root = nullptr;
            }
            else
                root = root->right;
        }
        return res;
    }
};