class Solution {
public:
    int mySqrt(int x) {
        for (long long int i = 0; i <= 46341; i++) {
            if(i * i == x) return i;
            if (i * i > x) return --i;
        }
        return -1;
    }
};