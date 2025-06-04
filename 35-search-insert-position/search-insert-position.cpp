class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e = nums.size()-1;
        int mid = (s+e)/2;
        int count = 0;
        int n = 0;
        sort(nums.begin(),nums.end());
        while(s<=e){
            mid = (s+e)/2;
          if(nums[mid]==target){
              return mid;
            }
            else if(nums[mid]<=target){
                s = mid+1;

            }
            else if(nums[mid]>=target){
                e = mid-1;
            }
        }
       return s;
    }
};