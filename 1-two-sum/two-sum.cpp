class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        int i = 0, j = 1;

        while (i < nums.size()) {
            if (j >= nums.size()) {
                i++;
                j = i + 1;
                continue;
            }

            if (nums[i] + nums[j] == target) {
                x.push_back(i);
                x.push_back(j);
                return x;
            }

            j++;
        }
        return x;
    }
};
