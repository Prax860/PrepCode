class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 0;
        for(int i = 0; i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                int s = (nums[i]-1)*(nums[j]-1);
                prod = max(prod, s);
            }
        }
        return prod;
    }
};