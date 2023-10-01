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
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false; 
        if (!root->right && !root->left) return (root->val == targetSum);
        if (root->right)root->right->val += root->val;
        if (root->left)root->left->val += root->val;
        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);
    }
//     bool hasPathSum(TreeNode* root, int targetSum) {
        
//         stack<TreeNode*> tree;
//         if(!root) return false;
//         tree.push(root);
//         while(!tree.empty())
//         {
//             TreeNode *current = tree.top();
//             tree.pop();
//             if(!current->right && !current->left && current->val == targetSum)
//                 return true;
//             if(current->left) current->left->val += current->val, tree.push(current->left);
//             if(current->right) current->right->val += current->val, tree.push(current->right);
//         }
//         return false;
//     }
};