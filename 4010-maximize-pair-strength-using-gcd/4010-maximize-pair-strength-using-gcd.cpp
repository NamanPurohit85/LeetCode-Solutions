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
                long long numerator = (long long)nums[i] * (long long)nums[j];
                long long denominator = gcd(nums[i], nums[j]);
                denominator *= denominator;
                ans = max(ans, numerator / denominator);
            }
        }
        return ans;
    }
};