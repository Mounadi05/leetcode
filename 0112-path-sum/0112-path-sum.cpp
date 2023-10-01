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
    
    // bool hasPathSum(TreeNode* root, int targetSum,int sum = 0) {
    //     if (!root) return false;
    //     sum += root->val; 
    //     if (!root->right && !root->left) return (targetSum == sum);
    //     return hasPathSum(root->left,targetSum,sum) || hasPathSum(root->right,targetSum,sum);
    // }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        stack<TreeNode*> tree;
        if(!root) return false;
        tree.push(root);
        while(!tree.empty())
        {
            TreeNode *current = tree.top();
            tree.pop();
            if(!current->right && !current->left && current->val == targetSum)
                return true;
            if(current->left) current->left->val += current->val, tree.push(current->left);
            if(current->right) current->right->val += current->val, tree.push(current->right);
        }
        return false;
    }
};