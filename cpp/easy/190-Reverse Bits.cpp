class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 0;
        for (int i = 0; i < 32; i++) {
            x = x << 1;
            x += n & 1;
            n = n >> 1;
        }
        cout << x << endl;
        return x;
    }
};