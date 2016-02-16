class Solution {
public:
    bool wordPattern(string pattern, string str) {
        str += " ";
        unordered_map<char, string> m;
        set<string> s;
        for (int i = 0; i < pattern.size(); i++) {
            if (str.empty()) {
                return false;
            }
            int pos = str.find(" ");
            string sub = str.substr(0, pos);
            str = str.substr(pos + 1);
            if (m.find(pattern[i]) == m.end()) {
                if (s.find(sub) != s.end()) {
                    return false;
                }
                m[pattern[i]] = sub;
            }
            else {
                if (m[pattern[i]] != sub) {
                    return false;
                }
            }
            s.insert(sub);
        }
        return str.empty();
    }
};