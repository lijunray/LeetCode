class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows, vector<int>());
        if (numRows == 0) {
            return result;
        }
        result[0].push_back(1);
        if (numRows == 1) {
            return result;
        }
        result[1] = {1, 1};
        for (int i = 2; i < numRows; i++) {
            result[i].push_back(1);
            for (int j = 1; j < i; j++) {
                result[i].push_back(result[i - 1].at(j - 1) + result[i - 1].at(j));
            }
            result[i].push_back(1);
        }
        return result;
    }
};