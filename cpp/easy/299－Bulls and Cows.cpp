// My bad solution - 8ms
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int cow = 0;
        
        for (int i = 0; i < secret.size();) {
            if (secret[i] == guess[i]) {
                bull++;
                secret.erase(i, 1);
                guess.erase(i, 1);
            }
            else {
                i++;
            }
        }
        
        for (int j = 0; j < guess.size();) {
            int pos = guess.find(secret[j]);
            if (pos != string::npos) {
                cow++;
                secret.erase(j, 1);
                guess.erase(pos, 1);
            }
            else {
                j++;
            }
        }
        
        ostringstream s;
        s << bull << "A" << cow << "B";
        return s.str();
        
    }
};

//Other's better solution - 4ms
class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int cow = 0;
        
        int count1[10] = {0};
        int count2[10] = {0};
        
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bull++;
            }
            count1[secret[i] - '0']++;
            count2[guess[i] - '0']++;
        }
        
        for (int i = 0; i < 10; i++) {
            cow += min(count1[i], count2[i]);
        }
        
        cow -= bull;
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};