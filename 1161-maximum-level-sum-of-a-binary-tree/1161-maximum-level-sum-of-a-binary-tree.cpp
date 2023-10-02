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
    int maxLevelSum(TreeNode* root) {
        
         queue<TreeNode*> nodes;
         if (!root) return {};
         nodes.push(root);
         pair<int, int> result{0,INT_MIN};
         int level = 0;
         while(!nodes.empty())
         {
             int size(nodes.size());
             level++;
             pair <int , int> tmp{level,0};
             for(int i = 0; i < size ;i++)
             {
                 TreeNode * current = nodes.front();
                 nodes.pop();
                 tmp.second += current->val;
                 if(current->left) nodes.push(current->left);
                 if(current->right) nodes.push(current->right);
             }
             if (tmp.second > result.second) result = tmp;
         }
         return result.first;
    }
};