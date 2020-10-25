#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
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
    int height = 0;
    int deepestLeavesSum(TreeNode* root) 
    {
        return dfs_level_sum(root, 1, tree_height(root));
    }
    int tree_height(TreeNode* root)
    {
        if(root == nullptr) return 0;
        height = max(tree_height(root->left), tree_height(root->right)) + 1;
        return height;
    }

    int dfs_level_sum(TreeNode* root, int currentLevel, int targetLevel)
    {
        if(root == nullptr) return 0;
        if(currentLevel == targetLevel) result += root->val;
        dfs_level_sum(root->right, currentLevel + 1, targetLevel);
        dfs_level_sum(root->left, currentLevel + 1, targetLevel);
        return result;
    }
};