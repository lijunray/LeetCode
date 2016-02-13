class Solution {
public:
    bool isValid(string s) {
        map<char, char> m;
        m['('] = ')';
        m['['] = ']';
        m['{'] = '}';
        stack<char> st;
        return help(s, m, st);
    }
    
    bool help(string s, map<char, char> m, stack<char> st) {
        cout << s << endl;
        if (st.empty() && s.empty()) {
            return true;
        }
        if (s.empty() && !st.empty()) {
            return false;
        }
        if (!st.empty() && m[st.top()] == s[0]) {
            st.pop();
            return help(s.substr(1), m, st);
        }
        st.push(s[0]);
        return help(s.substr(1), m, st);
    }
};