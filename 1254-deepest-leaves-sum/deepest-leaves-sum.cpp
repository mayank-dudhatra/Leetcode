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
    void dfs(TreeNode* root, int depth, int& sum, int& maxdepth){
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr){
            if(depth > maxdepth){
                maxdepth = depth;
                sum = root->val;
            }
            else if(depth == maxdepth){
                sum+=root->val;
            }
            return;
        }

        dfs(root->left, depth+1, sum, maxdepth);
        dfs(root->right, depth+1, sum, maxdepth);
    }

    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int maxdepth = -1;

        dfs(root, 0, sum, maxdepth);

        return sum; 
    
    }
};