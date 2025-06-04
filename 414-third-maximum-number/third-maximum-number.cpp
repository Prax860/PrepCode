class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> x;
        
        for(int i = 0; i < nums.size(); i++) {
            x.insert(nums[i]);
        }
        if(x.size() < 3) {
            return *x.rbegin(); 
        } else {
            auto it = x.rbegin();  
            ++it;                  
            ++it;                  
            return *it;
        }
    }
};
