class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int ans = numbers[i] + numbers[j];
            if (ans > target) {
                j--;
            } else if (ans < target) {
                i++;
            } else {
                break;
            }
        }
        return {i + 1, j + 1};
    }
};