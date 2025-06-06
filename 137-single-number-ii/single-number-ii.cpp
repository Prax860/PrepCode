class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>x;
        for(auto num: nums){
            x[num]++;
        }
        int y = 0;
        for(auto &it: x){
            if(it.second==1){
                y = it.first;
                break;
            }
        }
        return y;
    }
};