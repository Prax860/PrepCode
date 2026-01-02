class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        int zz = 0;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto i:freq){
            if(i.second>1){
                zz = i.first;
            }
        }

        return zz;
    }
};