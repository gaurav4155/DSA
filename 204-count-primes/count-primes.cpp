class Solution {
public:
    static int prime[5000002];

    static int init;

    int countPrimes(int n) { return n == 0 ? 0 : prime[n - 1]; }
};

int Solution::prime[5000002];

int Solution::init = []() {
    for (int i = 0; i <= 5000001; i++) {
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= 5000001; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 5000001; j += i) {
                prime[j] = 0;
            }
        }
    }

    for (int i = 1; i <= 5000001; i++) {
        prime[i] += prime[i - 1];
    }

    return 0;
}();