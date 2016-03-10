class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int hSize = haystack.length();
        int nSize = needle.length();
        for (int i = 0; i < hSize - nSize + 1;i++) {
            int j = 0;
            for (; j < nSize; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == nSize) {
                return i;
            }
        }
        return -1;
    }
};

