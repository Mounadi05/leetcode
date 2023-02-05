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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        stack<TreeNode*> tmp;
        if (!root) return pre;
        tmp.push(root);
        while(!tmp.empty())
        {
            root = tmp.top();
            tmp.pop();
            pre.push_back(root->val);
            if(root->right) tmp.push(root->right);
            if(root->left) tmp.push(root->left);
        }
        return pre;
    }
};