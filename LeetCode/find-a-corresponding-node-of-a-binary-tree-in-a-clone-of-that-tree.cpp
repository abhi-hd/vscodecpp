#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* result = NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        find_node(cloned, target->val);
        return result;
    }

    void find_node(TreeNode* node, int val)
    {
        if(node->val == val) this->result = node;
        else
        {
            if(node->left != NULL) find_node(node->left, val);
            if(node->right != NULL) find_node(node->right, val);
        }
    }
};