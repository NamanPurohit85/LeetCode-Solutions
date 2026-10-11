class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0, j = sqrt(c);

        while (i <= j) {
            if ((i * i) + (j * j) > c) {
                j--;
            } else if ((i * i) + (j * j) < c) {
                i++;
            } else {
                return true;
            }
        }
        return false;
    }
};