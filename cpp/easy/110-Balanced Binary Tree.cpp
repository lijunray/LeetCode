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
private:
    int depth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        return max(depth(root -> left), depth(root -> right)) + 1;
    }
    
public:
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        if (abs(depth(root -> left) - depth(root -> right)) <= 1) {
            return isBalanced(root -> left) && isBalanced(root -> right);
        }
        else {
            return false;
        }
    }
};

//Better Solution
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
        int depth(TreeNode* root) {
            if (root==NULL) return 1;
            int left = depth(root->left);
            int right = depth(root->right);
            if (left==0 || right==0 || abs(left-right)>1) return 0;
            return 1+max(left,right);
        }
        bool isBalanced(TreeNode* root) {
            return depth(root);
        }
};