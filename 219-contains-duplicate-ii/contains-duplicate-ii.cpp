class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> freq;
        int l = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i - l > k) {
                freq.erase(nums[l]);
                l++;
            }
            if(freq.count(nums[i])) {
                return true;
            }

            freq.insert(nums[i]);
        }
        return false;
    }
};