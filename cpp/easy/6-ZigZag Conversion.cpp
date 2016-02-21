class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        vector<string> vec(numRows, "");
        int i = 0;
        int flag = 1;
        
        while (!s.empty()) {
            if (flag == 1) {
                vec[i].push_back(s[0]);
                s = s.substr(1);
                i++;
            }
            else {
                vec[i].push_back(s[0]);
                s = s.substr(1);
                i--;
            }
            if (i == 0) {
                flag = 1;
            }
            else if (i == numRows - 1) {
                flag = 0;
            }
        }
        
        string result = vec[0];
        for (int i = 1; i < vec.size(); i++) {
            result += vec[i];
        }
        return result;
    }
};