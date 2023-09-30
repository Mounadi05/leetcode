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
//    void countPath(TreeNode* root,vector<string> &result, string path)
//     {
//         if (!root) return;
//         if (!root->right && !root->left)
//         {
//             path += to_string(root->val);
//             result.push_back(path);
//             path.clear();
//             return;
//         }
//         path += to_string(root->val) + "->";
//         countPath(root->right,result,path);
//         countPath(root->left,result,path);
//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> result;
//         countPath(root,result,"");
      
//         return result;
//     }
        
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        stack<TreeNode*> tree;
        tree.push(root);
        stack<string> paths;
        paths.push(to_string(root->val));
        vector<string> result;
        while(!tree.empty())
        {
            TreeNode* current = tree.top();
            string path = paths.top();
            tree.pop();
            paths.pop();
            if (!current->left && !current->right)  
                 result.push_back(path);
      
            if (current->right) {
                paths.push(path + "->" + to_string(current->right->val));
                tree.push(current->right);
            }
            if (current->left) {
                paths.push(path + "->" + to_string(current->left->val));
                tree.push(current->left);
            }
        }
        return result;
    }
};