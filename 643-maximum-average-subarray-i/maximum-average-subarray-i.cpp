class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long ans = LLONG_MIN; 
        int l = 0;
        long long sum = 0;          
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(i - l + 1 == k) {
                ans = max(ans, sum);
                sum -= nums[l];
                l++;
            }
        }
        return (double)ans / k;
    }
};