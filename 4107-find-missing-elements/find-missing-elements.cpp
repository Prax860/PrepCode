class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, bool> mp;
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        for (int x : nums) {
            mp[x] = true;
        }
        vector<int> ans;
        for (int i = mini; i <= maxi; i++) {
            if (!mp[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};