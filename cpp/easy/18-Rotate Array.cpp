class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        int i = length - 1;
        k = length > k ? k : k % length;
        vector<int> result(length, 0);
        int l = k - 1;
        while (k > 0) {
            result[--k] = nums[i--];
        }
        for (int j = length - 1; j > l; j--) {
            result[j] = nums[i--];
        }
        nums = result;
    }
};

