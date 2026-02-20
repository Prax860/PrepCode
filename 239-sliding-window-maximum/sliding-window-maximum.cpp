class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int maxVal = INT_MIN;
        int maxIdx = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] >= maxVal) {
                maxVal = nums[i];
                maxIdx = i;
            }
            if(i >= k-1) {
                if(maxIdx <= i - k) {
                    maxVal = nums[i-k+1];
                    maxIdx = i-k+1;
                    for(int j = i-k+1; j <= i; j++) {
                        if(nums[j] >= maxVal) {
                            maxVal = nums[j];
                            maxIdx = j;
                        }
                    }
                }
                ans.push_back(maxVal);
            }
        }
        return ans;
    }
};