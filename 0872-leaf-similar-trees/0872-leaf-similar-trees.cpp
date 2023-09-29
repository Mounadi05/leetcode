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
    void countleaf(TreeNode* root,vector<int> &leaf)
    {
        if (!root) return;
        if (!root->right && !root->left)
        {
            leaf.push_back(root->val);
            return;
        }
        countleaf(root->right,leaf);
        countleaf(root->left,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        countleaf(root1,tree1);
        countleaf(root2,tree2);
        return (tree1 == tree2);
    }
};