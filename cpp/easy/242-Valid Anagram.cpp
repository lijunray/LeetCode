class Solution {
public:
    
    vector<int> count(string s) {
        vector<int> result(26, 0);
        for (auto c : s) {
            result[c - 'a']++;
        }
        return result;
    }
    
    bool isAnagram(string s, string t) {
        vector<int> sv = count(s);
        vector<int> tv = count(t);
        return sv == tv;
    }
};