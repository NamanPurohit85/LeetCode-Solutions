class Solution {
public:
    int minAddToMakeValid(string s) {
        int count1 = 0, count2 = 0;
        for (auto& c : s) {
            if (c == '(')
                count1++;
            else {
                if (count1 > 0)
                    count1--;
                else {
                    count2++;
                }
            }
        }

        if (count1 != 0 && count2 != 0)
            return count1 + count2;
        return count1 == 0 ? count2 : count1;
    }
};