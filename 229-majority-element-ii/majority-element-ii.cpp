class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>x;
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        for(auto i:freq){
            if(i.second>nums.size()/3){
                x.push_back(i.first);
            }
        }
        return x;
    }
};