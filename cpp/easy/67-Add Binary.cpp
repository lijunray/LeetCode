class Solution {
public:
    string addBinary(string a, string b) {
        int advance = 0;
        int x = a.size() >= b.size() ? a.size() - b.size() : b.size() - a.size();
        if (a.size() > b.size()) {
            while (x > 0) {
                b = "0" + b;
                x--;
            }
        }
        else {
            while (x > 0) {
                a = "0" + a;
                x--;
            }
        }
        for (int j = a.size() - 1; j >= 0; j--) {
            int sum = (a[j] - '0') + (b[j] - '0') + advance;
            if (sum > 2) {
                advance = 1;
                a[j] = '1';
            }
            else if (sum == 2) {
                advance = 1;
                a[j] = '0';
            }
            else if (sum == 1) {
                advance = 0;
                a[j] = '1';
            }
            else {
                a[j] = '0';
            }
        }
        if (advance == 1) {
            a = "1" + a;
        }
        return a;
    }
};

