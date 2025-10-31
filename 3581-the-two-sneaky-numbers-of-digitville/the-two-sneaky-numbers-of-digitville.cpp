class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>x;
        for(auto &num:nums){
            freq[num]++;
        }
        for(auto &i: freq){
            if(i.second == 2){
                x.push_back(i.first);
            }
        }
        return x;
    }
};