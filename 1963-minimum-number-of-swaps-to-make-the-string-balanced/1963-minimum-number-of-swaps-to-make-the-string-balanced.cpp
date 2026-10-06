class Solution {
public:
    int minSwaps(string s) {
        int size = 0, openBrackets = 0;
        for (char& ch : s) {
            if (ch == '[') {
                openBrackets++;
            } else if (openBrackets > 0) {
                openBrackets--;
            } else {
                size++;
            }
        }
        return (size + 1) / 2;
    }
};