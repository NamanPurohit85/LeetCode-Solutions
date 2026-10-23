class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> isPrime(n + 1, true);
        vector<int> prime;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                prime.push_back(i);

                for (int j = i * 2; j <= n; j = j + i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> ans;
        int a = 0;
        for (int k = 0; k < prime.size(); k++) {
            a += prime[k];
            if(a <= s){
                ans.push_back(prime[k]);
            }else{
                break;
            }
        }
        return ans;
    }
};