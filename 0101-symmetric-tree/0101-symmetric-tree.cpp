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
            //recursively 
    // bool check(TreeNode* R,TreeNode* L)
    // {
    //     if(!R && !L)
    //         return true;
    //     if ((!R || !L) || (R->val != L->val))
    //         return false;
    //     return check(R->right,L->left) && check(L->right,R->left);
    // }
    // bool isSymmetric(TreeNode* root) {
    //     return check(root->right , root->left);
    // }
            //iteratively
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> tree; 
        TreeNode* left;
        TreeNode* right;
        tree.push(root->right);
        tree.push(root->left);
        while(!tree.empty())
        {
            right = tree.front();
            tree.pop();
            left = tree.front();
            tree.pop();
            if (!right && !left)
                    continue;
            if ((!right || !left) || (right->val != left->val))
                return false;
            tree.push(right->right);
            tree.push(left->left);
            tree.push(right->left);
            tree.push(left->right);
        }
        return true;
    }

};
 