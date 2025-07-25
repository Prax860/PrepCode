class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> uniq;
        int neg = INT_MIN;
        for (int val : nums) {
            uniq.insert(val);        
            if((val < 0)&&(val > neg)) {
            
                    neg = val;       
            }
        }

        vector<int> arr(uniq.begin(), uniq.end());
        int sum = 0;
        bool pos = false;

        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] >= 0) {
                sum += arr[i];
                pos = true;
            } else {
                break;  
            }
        }

        if (pos)
            return sum;
        else
            return neg;
    }
};
