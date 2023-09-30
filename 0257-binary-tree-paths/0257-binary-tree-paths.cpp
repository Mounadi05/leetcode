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
   void countPath(TreeNode* root,vector<string> &result, string path)
    {
        if (!root) return;
        if (!root->right && !root->left)
        {
            path += to_string(root->val);
            result.push_back(path);
            path.clear();
            return;
        }
        path += to_string(root->val) + "->";
        countPath(root->right,result,path);
        countPath(root->left,result,path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        countPath(root,result,"");
      
        return result;
    }
};