#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int result = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeSumBSTRecursive( root, low, high);
    }

    int rangeSumBSTRecursive (TreeNode* root, int low, int high)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        if(root->val < low)
        {
            return rangeSumBSTRecursive(root->right, low, high);
        }
        if(root->val > high)
        {
            return rangeSumBSTRecursive(root->left, low, high);
        }
        return root->val + rangeSumBSTRecursive(root->right, low, high) + rangeSumBSTRecursive(root->left, low, high);
    }
};