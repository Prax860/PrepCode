class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> x;
        for (int num : nums) {
            x[num]++;
        }

        int unq = 0;
        for (auto& [num, count] : x) {
            if (count == 1) {
                unq = num;
                break; 
            }
        }

        return unq;
    }
};
