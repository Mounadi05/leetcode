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
    void countNode(TreeNode *root,vector<int> &nodes)
    {
        if (!root)return;
        countNode(root->left,nodes);
        nodes.push_back(root->val);
        countNode(root->right,nodes);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> nodes;
        countNode(root,nodes);
        TreeNode* result = new TreeNode(nodes[0]);
        root = result;
        for(int i = 1 ;i< nodes.size() ;i++)
        {
            result->right = new TreeNode(nodes[i]);
            result = result->right;
        }
        return root;
    }
};