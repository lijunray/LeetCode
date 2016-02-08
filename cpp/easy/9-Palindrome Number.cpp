class Solution {
public:
    bool isPalindrome(int x) {
       if (x < 0) {
           return false;
       }
       int reversed = 0;
       int y = x;
       while (y > 0) {
           int temp = y % 10;
           reversed = reversed * 10 + temp;
           y /= 10;
       }
       return reversed == x;
    }
};