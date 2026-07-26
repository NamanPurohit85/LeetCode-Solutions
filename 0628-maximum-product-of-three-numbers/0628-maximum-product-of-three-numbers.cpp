class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans1 = 1, ans2 = 1, count1 = 3, len = nums.size() - 1;

        while (count1--) {
            ans1 *= nums[len--];
        }

        if (nums[0] < 0 && nums[1] < 0) {
            ans2 = nums[0] * nums[1] * nums[nums.size() - 1];
            if (ans1 < ans2) {
                return ans2;
            }
        }
        if (ans1 == 0 && ans2 == 1) {
            return ans1;
        }
        if (ans1 < ans2) {
            return ans2;
        } else {
            return ans1;
        }
    }
};