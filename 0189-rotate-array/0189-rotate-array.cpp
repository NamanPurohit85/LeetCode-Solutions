class Solution {
public:
    void singleRotate(vector<int>& nums) {
        int l = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            nums[i + 1] = nums[i];
        }
        nums[0] = l;
    }
    void rotate(vector<int>& nums, int k) {
        for (int i = 0; i < k; i++) {
            singleRotate(nums);
        }
    }
};