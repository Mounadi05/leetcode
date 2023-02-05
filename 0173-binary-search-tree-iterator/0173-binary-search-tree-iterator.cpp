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
class BSTIterator {

public:
    BSTIterator(TreeNode* root) {
        inorder(root); 
        _len = 0;
    }
    
    int next() {
        return (_res[_len++]);
    }
    
    bool hasNext() {
        return (_len < _res.size());
    }
    private :
        int _len;
        vector <int> _res;
        void inorder(TreeNode *root)
        {
            if(!root) return;
            inorder(root->left);
            _res.push_back(root->val);
            inorder(root->right);
        }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */