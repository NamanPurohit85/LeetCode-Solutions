class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> windowCount;

        for (int i = 0; i <= n - k; i++) {

            // unordered_set<int> seen;

            for (int j = i; j < i + k; j++) {
                // seen.insert(nums[j]);
                windowCount[nums[j]]++;
            }

            // for (int x : seen) {
            //     windowCount[x]++;
            // }
        }

        int ans = -1;

        for (auto [x, count] : windowCount) {
            if (count == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};