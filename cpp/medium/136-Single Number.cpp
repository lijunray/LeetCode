class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(), i = 0, ret = 0;

        for (i = 0; i < n; ++i)
            ret ^= nums[i];

        return ret;
    }
};