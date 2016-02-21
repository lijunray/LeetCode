class Solution {
public:
    bool isPalindrome(string s) {
        string ss = help(s);
        return isHelp(ss);
    }
    
    bool isHelp(string s) {
        if (s[0] != s[s.size() - 1]) {
            return false;
        }
        if (s.size() <= 1) {
            return true;
        }
        return isHelp(s.substr(1, s.size() - 2));
    }
    
    string help(string s) {
        string result;
        for (auto ch : s) {
            if (isalpha(ch) || isdigit(ch)) {
                result.push_back(tolower(ch));
            }
        }
        return result;
    }
};