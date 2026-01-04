class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int maxi = 0;
        for(int x : nums) {
            maxi = max(maxi, x);
        }
        vector<int> count(maxi + 1, 0);
        vector<int> sum(maxi + 1, 0);
        for(int i = 1; i <= maxi; i++) {
            for(int j = i; j <= maxi; j += i) {
                count[j]++;
                sum[j] += i;
            }
        }

        int res = 0;
        for(int x : nums) {
            if(count[x] == 4) {
                res += sum[x];
            }
        }

        return res;
    }
};
