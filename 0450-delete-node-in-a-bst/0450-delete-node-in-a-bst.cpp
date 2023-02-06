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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return root;
        else if (key < root->val) root->left = deleteNode(root->left, key);
        else if (key > root->val) root->right = deleteNode(root->right, key);
        else
        {
            if (!root->right && !root->left)
            {
                delete root;
                root = nullptr;
                return root;
            }
            else if (!root->right)
            {
                TreeNode *tmp = root;
                root = tmp->left;
                delete tmp;
                return root;
            }
            else if (!root->left)
            {
                TreeNode *tmp = root;
                root = tmp->right;
                delete tmp;
                return root;
            }
            else
            {
                TreeNode *tmp = FindMax(root->left);
                root->val = tmp->val;
                root->left =  deleteNode(root->left, tmp->val);
            }
        }
        return root;
    }
private :
    TreeNode * FindMax(TreeNode *node)
    {
        TreeNode *root = node;
        while(root->right)
            root = root->right;
        return root;
    } 
};