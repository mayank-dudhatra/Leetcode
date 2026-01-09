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
int maxDepth(TreeNode* root) {

        if(root==nullptr){
            return 0;
        } 
       
        int left = maxDepth(root->left);
        int right  = maxDepth(root->right);

        return 1 + max(left,right);
}

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(!root) return nullptr;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        if(leftDepth == rightDepth) return root;

        if (leftDepth > rightDepth) return subtreeWithAllDeepest(root->left);
        else return subtreeWithAllDeepest(root->right);

    }
};