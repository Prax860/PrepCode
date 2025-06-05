class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> x;
        int n = nums.size();
        for (int num : nums) {
            x[num]++;
        }
        for (auto it : x) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1; 
    }
};
