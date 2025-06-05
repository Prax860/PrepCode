class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>x;
        bool flag = false;
        for(auto num: nums){
            x[num]++;
        }
        for(auto &it:x){
            if(it.second>1){
                flag = true;
            }
        }
        return flag;
    }
};