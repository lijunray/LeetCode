/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root || root -> val == sum && (root -> left || root -> right)) {
            return false;
        }
        return help(root, sum);
    }
    
    bool help(TreeNode* root, int sum) {
        if (!root) {
            return false;
        }
        sum -= root -> val;
        if (!root -> left && !root -> right) {
            return sum == 0;
        }
        return help(root -> left, sum) || help(root -> right, sum);
        
    }
    
};