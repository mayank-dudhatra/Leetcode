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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int maxs = INT_MIN;
        int level = 1;
        int maxlevel = 1;

        queue<TreeNode* > q;
        q.push(root);

        while(!q.empty()) {
            int s = q.size();
            int currmax = 0;

            for(int i=0 ;i<s; i++){
                TreeNode* curr = q.front();
                q.pop();

                currmax += curr->val;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);

            }
           if(currmax > maxs){
            maxs = currmax;
            maxlevel = level;
           }
           level++;
        }
            return maxlevel;
    }
};