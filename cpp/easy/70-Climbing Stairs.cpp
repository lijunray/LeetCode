class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2) {
            return n;
        }
        
        vector<int> result(n);
        result[0] = 1;
        result[1] = 2;
        for (int i = 2; i < n; i++) {
            result[i] = result[i - 1] + result[i - 2];
        }
        
        return result[n - 1];
    }
};