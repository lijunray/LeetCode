//My bad solution
class Solution {
public:
    string countAndSay(int n) {
        if (n <= 1) {
            return to_string(n);
        }
        vector<int> ai(10, 0);
        string arr[n] = {""};
        arr[0] = "1";
        arr[1] = "11";
        
        for (int i = 2; i < n; i++) {
            ai.assign(10, 0);
            string current = arr[i - 1];
            char temp = current[0];
            for (int j = 0; j < current.size(); j++) {
                if (current[j] != temp) {
                    arr[i] = arr[i] + to_string(ai[temp - '0']) + temp;
                    ai[temp - '0'] = 0;
                }
                ai[current[j] - '0']++;
                temp = current[j];
            }
            arr[i] = arr[i] + to_string(ai[temp - '0']) + temp;
        }
        cout << arr[n - 2];
        return arr[n - 1];
    }
};
