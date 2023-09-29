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
    void count(TreeNode* root,int &Max,int n = 0)
    {
        if (!root)
        {
            Max = max(Max,n);
            n = 0;
            return ;
        }
        n++;
        count(root->left,Max,n);
        count(root->right,Max,n);
        
    }
    int maxDepth(TreeNode* root) {
        int Max = 0;
        count(root,Max,0);
        return Max;
    }
};