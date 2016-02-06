class Solution {
public:
    /*
    bool isPowerOfThree(int n) {
        if (n == 1) {
            return true;
        }
        if (n == 0 || n % 3 != 0) {
             return false;
        }
        return isPowerOfThree(n / 3);
    }
    */
    
    bool isPowerOfThree(int n) {
        if (n == 0) {
            return false;
        }
        while (n != 1) {
            if (n % 3 != 0) {
                return false;
            }
            if (n == 1) {
                return true;
            }
            n /= 3;
        }
    }
};