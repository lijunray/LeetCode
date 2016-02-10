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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        return help(root, 0, 0) + 1;
    }
    
    int help(TreeNode* root, int min, int current) {
        if (root -> left) {
            current++;
            min = help(root -> left, min, current);
            if (root -> right) {
                min = help(root -> right, min, current);
            }
        }
        else if (root -> right) {
            current++;
            min = help(root -> right, min, current);
        }
        else if (current < min || min == 0) {
            min = current;
        }
        return min;
    }
};