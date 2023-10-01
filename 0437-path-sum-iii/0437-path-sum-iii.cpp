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
    
    int find(TreeNode* root,int targetSum,long long sum)
    {
        if (!root) return 0;
        sum += root->val;
        int result =  (sum == targetSum);
        result += find(root->left,targetSum,sum); 
        result += find(root->right,targetSum, sum);
        return result;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        int result = find(root,targetSum,0);
        return result +  pathSum(root->right,targetSum) +pathSum(root->left,targetSum);
    }
};