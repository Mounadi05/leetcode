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
    vector<vector<int>> levelOrder(TreeNode* root) {
       queue<TreeNode*> tree;
        vector<vector<int>> result;
        if(root) tree.push(root);
        int levels = 0;
        while(!tree.empty())
        {
            levels = tree.size();
            vector<int> level;
            for(int i = 0; i < levels;i++)
            {
                TreeNode* current = tree.front();
                tree.pop();
                level.push_back(current->val);
                if(current->left) tree.push(current->left);
                if(current->right) tree.push(current->right);
            }
            result.push_back(level);
        }
        return result;
    }
};