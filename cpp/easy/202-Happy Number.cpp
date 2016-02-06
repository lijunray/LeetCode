class Solution {
public:
    bool isHappy(int n) {
        set<int> sum_set;
        int sum = 0;
        sum_set.insert(n);
        while (1) {
            sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            if (sum == 1) {
                return true;
            }
            if (sum_set.find(sum) != sum_set.end()) {
                return false;
            }
            else {
                n = sum;
                sum_set.insert(sum);
            }
        }
    }
};