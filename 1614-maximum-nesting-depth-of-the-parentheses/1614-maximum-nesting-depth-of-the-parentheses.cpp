class Solution {
public:
    int maxDepth(string s) {
        int count = 0, ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                count++;
            }
            if(s[i] == ')'){
                ans = max(count, ans);
                count--;
            }
        }
        return ans;
    }
};