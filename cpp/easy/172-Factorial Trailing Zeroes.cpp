class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        for (int i = 0; pow(5, i) < n; i++) {
            result = n / pow(5, i + 1) + result;
        }
        return result;
    }
};