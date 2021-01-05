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
    int sumEvenGrandparent(TreeNode* root) {
        return sumEvenGrandpa(root);
    }
    int sumEvenGrandpa(TreeNode* root)
    {
        if (root == nullptr) return 0;
        if( root->val % 2 == 0 )
        {
            if(root->left != nullptr)
            {
                if(root->left->left != nullptr) result += root->left->left->val;
                if(root->left->right != nullptr) result += root->left->right->val;
            }
            if(root->right != nullptr)
            {
                if(root->right->left != nullptr) result += root->right->left->val;
                if(root->right->right != nullptr) result += root->right->right->val;
            }
        }
        sumEvenGrandpa(root->left);
        sumEvenGrandpa(root->right);
        return result;
    }
};
int main()
{

}