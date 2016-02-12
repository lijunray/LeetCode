class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int l1 = C - A;
        int w1 = D - B;
        
        int l2 = G - E;
        int w2 = H - F;
        
        if (D < F || H < B || E > C || G < A) {
            return l1 * w1 + l2 * w2;
        }
        
        int l3 = min(C, G) - max(A, E);
        int w3 = min(D, H) - max(B, F);
        return l1 * w1 + l2 * w2 - l3 * w3;
    }
};
