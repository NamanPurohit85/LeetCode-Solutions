class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = bitset<32>(a).count();
        int s2 = bitset<32>(b).count();

        if (s1 >= s2) {
            return s1 * s2;
        }

        // Guard against division by zero if s1 is 0
        return (s1 == 0) ? 0 : (s2 / s1);
    }
};