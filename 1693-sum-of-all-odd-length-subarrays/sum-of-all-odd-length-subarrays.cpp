class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int n = arr.size();
        int res = 0;

        for(int k = 1; k <= n; k += 2) {

            int sum = 0;

            for(int i = 0; i < n; i++) {

                sum += arr[i];

                if(i >= k)
                    sum -= arr[i-k];

                if(i >= k-1)
                    res += sum;
            }
        }
        return res;
    }
};