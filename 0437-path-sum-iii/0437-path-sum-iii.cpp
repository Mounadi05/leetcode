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
    int result = 0;
    void find(TreeNode* root,int targetSum,long long sum)
    {
        if (!root) return;
        sum += root->val;
        if (sum == targetSum) result++;
        find(root->left,targetSum,sum); 
        find(root->right,targetSum, sum);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        find(root,targetSum,0);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return result;
    }
};