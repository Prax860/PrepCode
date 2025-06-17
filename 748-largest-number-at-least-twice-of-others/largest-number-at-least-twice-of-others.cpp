class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int maxVal = *it;
        int maxIndex = distance(nums.begin(), it);

        for (int i = 0; i < nums.size(); ++i) {
            if (i != maxIndex && nums[i] * 2 > maxVal) {
                return -1;
            }
        }
        return maxIndex;
    }
};
