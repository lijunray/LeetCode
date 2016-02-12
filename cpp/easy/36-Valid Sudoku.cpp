class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> test;
        for (int i = 0; i < 9; i++) {
            if (!help(board[i])) {
                return false;
            }
        }
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                test.push_back(board[k][j]);
            }
            if (!help(test)) {
                return false;
            }
            test.clear();
        }
        int p = 0;
        int q = 0;
        while (p < 7) {
            for (int m = p; m < p + 3; m++) {
                for (int n = q; n < q + 3; n++) {
                    test.push_back(board[m][n]);
                }
            }
            if (!help(test)) {
                return false;
            }
            test.clear();
            q += 3;
            if (q == 9) {
                p += 3;
                q = 0;
            }
        }
        
        return true;
    }
    
    bool help(vector<char>& vec) {
        vector<int> nums(9, 0);
        for (auto ch : vec) {
            if (ch != '.') {
                nums[ch - '1']++;
            }
        }
        for (auto e : nums) {
            if (e > 1) {
                return false;
            }
        }
        return true;
    }
};