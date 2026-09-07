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
    int rootToLeafSum(TreeNode* root, int value)
    {
        int current = value * 10 + root->val;

        // Leaf node
        if (root->left == NULL && root->right == NULL)
        {
            return current;
        }

        int sum = 0;

        if (root->left)
            sum += rootToLeafSum(root->left, current);

        if (root->right)
            sum += rootToLeafSum(root->right, current);

        return sum;
    }

    int sumNumbers(TreeNode* root) {
        if (root == NULL)
            return 0;

        return rootToLeafSum(root, 0);
    }
};