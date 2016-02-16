class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string mins = strs[0];
        string result = "";
        for (int j = 0; j < mins.size(); j++) {
            for (int i = 0; i < strs.size(); i++) {
                if (mins[j] != strs[i][j]) {
                    return result;
                }
            }
            result += mins[j];
        }
        return result;
    }
};