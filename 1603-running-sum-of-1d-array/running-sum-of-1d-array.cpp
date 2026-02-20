class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>perf(n,0);
        perf[0] = nums[0];

        for(int i=1;i<n;i++){
            perf[i] = perf[i-1]+nums[i];
        }
        return perf;
    }
};