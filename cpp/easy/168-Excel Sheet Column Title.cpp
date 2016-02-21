class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
        while (n > 0) {
            result = (char)((--n) % 26 + 'A') + result;
            n /= 26;
        }
        return result;
    }
};
