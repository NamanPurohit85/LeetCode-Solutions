class Solution {
public:
    int maxProduct(int n) {
        int l, m = 0, mProduct = 0;
        while (n) {
            l = n % 10;
            n /= 10;
            m = max(l, m);

            mProduct = max(mProduct, m * (n % 10));

        }
        return mProduct;
    }
};