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
  
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> tree;
        vector<double> average;
        tree.push(root);
        int levelSize = 0;
        while(!tree.empty())
        {
            levelSize = tree.size();
            double count = 0.0;
            double nodes = 0.0;
            for(int i = 0 ; i < levelSize;i++)
            {    
                TreeNode *current = tree.front();
                tree.pop();
                nodes += current->val;
                count++;
                if(current->right)tree.push(current->right);
                if(current->left)tree.push(current->left);
            }
             average.push_back(nodes/count);
         }
        return average;
    }
};