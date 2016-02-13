class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty()) {
            return 0;
        }
        int result = 0;
        vector<char> sc;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                sc.push_back(s[i]);
                if (s[i - 1] == ' ') {
                    return sc.size();
                }
            }
        }
        return sc.size();
    }
};