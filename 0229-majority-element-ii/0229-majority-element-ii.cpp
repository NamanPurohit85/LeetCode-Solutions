class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        int count = nums.size() / 3;

        for (int i : nums) {
            freq[i]++;
        }

        for(const auto& p: freq){
            if(p.second > count){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};