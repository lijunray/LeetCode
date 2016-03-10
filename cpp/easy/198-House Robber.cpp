class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int max0 = 0;
        int max1 = 0;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result = max0 + nums[i] > max1 ? max0 + nums[i] : max1;
            max0 = max1;
            max1 = result;
        }
        return result;
    }
};