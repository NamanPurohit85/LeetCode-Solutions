class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        deque<int> Q;
        // 1st window
        for (int i = 0; i < k; i++) {
            while (Q.size() > 0 && nums[Q.back()] <= nums[i]) {
                Q.pop_back();
            }
            Q.push_back(i);
        }
        for (int i = k; i < n; i++) {
            ans.push_back(nums[Q.front()]);

            // remove element which is not the part of curr window
            while (Q.size() > 0 && Q.front() <= i - k) {
                Q.pop_front();
            }

            // remove the smaller values
            while (Q.size() > 0 && nums[Q.back()] <= nums[i]) {
                Q.pop_back();
            }
            Q.push_back(i);
        }
        ans.push_back(nums[Q.front()]);
        return ans;
    }
};