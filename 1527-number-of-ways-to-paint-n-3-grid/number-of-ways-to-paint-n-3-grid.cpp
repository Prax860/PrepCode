class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long same = 6;
        long diff = 6;

        for (int i = 2; i <= n; i++) {
            long n = (same * 3 + diff * 2) % MOD;
            long d = (same * 2 + diff * 2) % MOD;

            same = n;
            diff = d;
        }

        return (same + diff) % MOD;
    }
};