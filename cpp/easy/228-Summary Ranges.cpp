class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.size() == 1) {
            result.push_back(to_string(nums[0]));
            return result;
        }
        if (nums.empty()) {
            return result;
        }
        int i = 0;
        int j = 0;
        while (i < nums.size()) {
            if (nums[i] + 1 != nums[i + 1]) {
                if (nums[i] == nums[j]) {
                    result.push_back(to_string(nums[j]));
                    j = ++i;
                }
                else{
                    result.push_back(to_string(nums[j]) + "->" +to_string(nums[i]));
                    j = ++i;
                }
            }
            else {
                i++;
            }
        }
        return result;
    }
};