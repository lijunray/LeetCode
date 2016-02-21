//Bad Solution 16ms
class Solution {
public:
    int reverse(int x) {
        stack<char> s;
        long result = 0;
        int neg = x < 0 ? 1 : 0;
        x = neg == 1 ? -x : x;
        while (x != 0) {
            s.push((char)(x % 10 + '0'));
            x /= 10;
        }
        int length = s.size();
        for (int i = 0; i < length; i++) {
            result = result + (s.top() - '0') * pow(10, i);
            s.pop();
        }
        result = neg == 1 ? -result : result;
        cout << result;
        if (result > 2147483647 || result < -2147483647) {
            return 0;
        }
        return result;
    }
};

//Better 8ms
class Solution {
public:
    int reverse(int x) {
        long result = 0;
        int neg = x < 0 ? 1 : 0;
        x = neg == 1 ? -x : x;
        for (int i = 0; x != 0; i++) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        result = neg == 1 ? -result : result;
        if (result > 2147483647 || result < -2147483647) {
            return 0;
        }
        return result;
    }
};