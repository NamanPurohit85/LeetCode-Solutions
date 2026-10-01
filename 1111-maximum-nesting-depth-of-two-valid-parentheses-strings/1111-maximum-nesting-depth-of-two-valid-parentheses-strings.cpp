class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count = 1;
        vector<int> ans;
        for (int i = 1; i < seq.size(); i++) {
            if (count % 2 == 0)
                ans.push_back(1);
            else
                ans.push_back(0);
            if (seq[i - 1] == '(' && seq[i] == '(') {
                count++;
            } else if (seq[i - 1] == ')' && seq[i] == ')') {
                count--;
            }
        }
        if (count % 2 == 0)
            ans.push_back(1);
        else
            ans.push_back(0);
        return ans;
    }
};