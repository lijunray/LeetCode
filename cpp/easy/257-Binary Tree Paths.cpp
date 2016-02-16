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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        return help(root, result, "");
    }
    
    vector<string> help(TreeNode* root, vector<string> result, string s) {
        if (!root) {
            return result;
        }
        if (!root -> left && !root -> right) {
            s += to_string(root -> val);
            result.push_back(s);
            return result;
        }
        else {
            s += to_string(root -> val) + "->";
        }        
        result = help(root -> left, result, s);
        result = help(root -> right, result, s);
        return result;
    }
};