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
   vector<int> inorderTraversal(TreeNode* root) {
  vector<int> res;
  stack<TreeNode*> tree;
  while (root != nullptr || !tree.empty()) {
    if (root != nullptr) {
      tree.push(root);
      root = root->left;
    } else {
      root = tree.top();
      tree.pop();
      res.push_back(root->val);
      root = root->right;
    }
  }
  return res;
}
};

 

