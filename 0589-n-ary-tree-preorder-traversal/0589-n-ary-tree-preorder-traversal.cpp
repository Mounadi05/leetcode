/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traversal(Node *root , vector<int> &res)
    {
        res.push_back(root->val);
        for(auto n : root->children)
            traversal(n, res);     
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        if (!root)
            return res;
       traversal(root, res);
        return res;
    }
};