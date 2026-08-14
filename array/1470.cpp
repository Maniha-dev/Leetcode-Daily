class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());

        for(int i = 1; i < nums.size(); i += 2) {
            ans[i - 1] = nums[(i - 1) / 2];
            ans[i] = nums[n];
            n++;
        }

        return ans;
    }
};