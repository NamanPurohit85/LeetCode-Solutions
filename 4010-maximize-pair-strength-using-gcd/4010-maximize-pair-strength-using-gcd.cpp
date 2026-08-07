class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long long current =
                    (long long)(nums[i] / gcd(nums[i], nums[j])) *
                    (long long)(nums[j] / gcd(nums[i], nums[j]));
                ans = max(ans, current);
            }
        }
        return ans;
    }
};