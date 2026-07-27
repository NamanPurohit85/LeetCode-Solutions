class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long int firstMax = INT64_MIN, secondMax = INT64_MIN,
                      firstMin = INT64_MAX, secondMin = INT64_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstMax) {
                secondMax = firstMax;
                firstMax = nums[i];
            } else if (nums[i] > secondMax) {
                secondMax = nums[i];
            }

            if (nums[i] < firstMin) {
                secondMin = firstMin;
                firstMin = nums[i];
            } else if (nums[i] < secondMin) {
                secondMin = nums[i];
            }
        }
        return max(((firstMax - 1) * (secondMax - 1)), ((firstMin - 1) * (secondMin - 1)));
    }
};