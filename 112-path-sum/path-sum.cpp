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
    bool sum(TreeNode* root, int currentSum, int& targetSum) {

    if (root == nullptr)
        return false;

    currentSum += root->val;

    if (root->left == NULL && root->right == NULL) {
        return currentSum == targetSum;
    }

    return sum(root->left, currentSum, targetSum) ||
           sum(root->right, currentSum, targetSum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
    int currentSum = 0;

    return sum(root, currentSum, targetSum);
    }
};