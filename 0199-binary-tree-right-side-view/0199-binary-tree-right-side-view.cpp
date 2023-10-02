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
    vector<int> result;
    vector<int> rightSideView(TreeNode* root, int index = 0) {
        if (!root) return {};
        
        if (result.size() <= index) result.push_back(root->val);
        else result[index] = root->val;

        rightSideView(root->left, index + 1);
        rightSideView(root->right, index + 1);

        return result;
    }
};