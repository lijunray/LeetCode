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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) {
            return result;
        }
        result = help(root, result, 0);
        return vector<vector<int>>(result.rbegin(), result.rend());
    }
    
    vector<vector<int>> help(TreeNode* root, vector<vector<int>> result, int i) {
        if (!root) {
            return result;
        }
        if (i + 1 > result.size()) {
            result.push_back(vector<int>());
        }
        result[i].push_back(root -> val);
        result = help(root -> left, result, i + 1);
        result = help(root -> right, result, i + 1);
        return result;
    }
};