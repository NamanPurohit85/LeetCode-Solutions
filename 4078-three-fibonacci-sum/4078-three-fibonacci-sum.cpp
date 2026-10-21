class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a = 0, b = 1;
        for(int i = 0; i < n/2; i++){
            int c = a + b;
            if(2*c == n){
                return true;
            }
            if(2*c > n){
                return false;
            }
            a = b;
            b = c;
        }
        return false;
    }
};