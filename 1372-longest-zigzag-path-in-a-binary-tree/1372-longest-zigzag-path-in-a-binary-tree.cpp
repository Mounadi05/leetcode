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
    int    ZigZag(TreeNode* node,bool R)
    {
        int count  = 0;
        while(node)
        {
            if(R && node->right)
            {
                node = node->right;
                count++,R = false;
            }
            else if(!R && node->left)
            {
                R = true;
                node = node->left,count++;
            }
            else break;
        }
        return count;
    }
    int longestZigZag(TreeNode* root) {
        stack<TreeNode*> tree;
        tree.push(root);
        int Longest = -1;
        while(!tree.empty())
        {
            TreeNode* current = tree.top();
            tree.pop();
            Longest = max(Longest, ZigZag(current , true));
            Longest = max(Longest, ZigZag(current , false));
            if(current->left) tree.push(current->left);
            if(current->right) tree.push(current->right);
        }
        return Longest;
    }
};