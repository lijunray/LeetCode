class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        digits[i]++;
        for (; i >= 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i == 0) {
                    digits.resize(digits.size() + 1);
                    digits[digits.size() - 1] = 0;
                    digits[i] = 1;
                }
                else{
                    digits[i - 1]++;
                }
            }
            else {
                return digits;
            }
        }
        return digits;
    }
};