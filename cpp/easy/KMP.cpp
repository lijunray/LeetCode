class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        if (haystack.size() < needle.size()) {
            return -1;
        }
        vector<int> kmp = getKMP(needle);
        int m = 0;
        int i = 0;
        while (m + i < haystack.size()) {
            if (needle[i] == haystack[m + i]) {
                cout << i;
                if (i == needle.size() - 1) {
                    return m;
                }
                i++;
            }
            else {
                if (kmp[i] > 1) {
                    m = m + i - kmp[i];
                    i = kmp[i];
                }
                else {
                    i = 0;
                    m++;
                }
            }
        }
        return -1;
    }
    
    vector<int> getKMP(string needle) {
        vector<int> result(needle.size(), 0);
        result[0] = -1;
        int j = 0;
        for (int i = 2; i < needle.size();) {
            if (needle[i] == needle[j]) {
                result[i] = j + 1;
                j++;
                i++;
            }
            else if (j > 0) {
                j = result[j];
            }
            else {
                result[i] = 0;
                i++;
            }
        }
        return result;
    }
};