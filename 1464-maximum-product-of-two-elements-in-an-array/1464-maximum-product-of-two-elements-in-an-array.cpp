class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans1 = 0, ans2 = 0, len = nums.size();
        sort(nums.begin(), nums.end());

        if (nums[0] < 0 && nums[1] < 0) {
            ans1 = (nums[0] - 1) * (nums[1] - 1);
        }

        ans2 = (nums[len - 1] - 1) * (nums[len - 2] - 1);
        if (ans1 > ans2) {
            return ans1;
        } else {
            return ans2;
        }
    }
};