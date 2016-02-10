class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (!nums2.empty()) {
            nums1.resize(m);
            int x = 0;
            while (x < n) {
                nums1.push_back(nums2[x]);
                x++;
            }
            n = m + n;
            x = m;
            while (x < n) {
                while (x != 0 && nums1[x] < nums1[x - 1]) {
                    int y = nums1[x - 1];
                    nums1[x - 1] = nums1[x];
                    nums1[x] = y;
                    x--;
                }
                m++;
                x = m;
            }
        }
    }
};