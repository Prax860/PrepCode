class Solution {
public:
    int func(int n){
        int x = n;
        int sum = 0;
        while(x>0){
            int rem = x%10;
            sum+=rem;
            x/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(auto &i: nums){
            i = func(i);
        }
        int mini = *min_element(nums.begin(),nums.end());
        return mini;
    }
};