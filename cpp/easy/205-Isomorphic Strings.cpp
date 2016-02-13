class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sl = s.size();
        int tl = t.size();
        if (sl != tl) {
            return false;
        }
        if (s == t) {
            return true;
        }
        unordered_map<char, char> ms;
        unordered_map<char, char> mt;
        for (int i = 0; i < sl; i++) {
            if (ms.find(s[i]) == ms.end()) {
                ms[s[i]] = t[i];
            }
            if (mt.find(t[i]) == mt.end()) {
                mt[t[i]] = s[i];
            }
            if (ms[s[i]] != t[i] || mt[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
    
};