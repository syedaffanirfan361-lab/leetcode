class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        if (nums.empty()) return ans;

        ans[0] = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            ans[i] = ans[i - 1] + nums[i];
        }
        return ans;
    }
};