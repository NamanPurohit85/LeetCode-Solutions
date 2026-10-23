class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> isPrime(n + 1, true);

        // sieve of eratosthenes
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (long long j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> ans;
        long long current_sum = 0;

        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                if (current_sum + i <= s) {
                    current_sum += i;
                    ans.push_back(i);
                } else {
                    break;
                }
            }
        }
        return ans;
    }
};