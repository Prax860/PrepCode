class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<int>& current,
                   vector<vector<int>>& result) {
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        // Include the current element
        current.push_back(nums[index]);
        backtrack(index + 1, nums, current, result);
        current.pop_back();

        // Skip duplicates
        int idx = index + 1;
        while (idx < nums.size() && nums[idx] == nums[index]) {
            idx++;
        }

        // Exclude the current element
        backtrack(idx, nums, current, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> res;
        backtrack(0, nums, res, ans);
        return ans;
    }
};
