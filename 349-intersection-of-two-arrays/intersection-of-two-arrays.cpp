class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = 0;
        vector<int> x;
        set<int>y;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                y.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
      for(int val : y) {
            x.push_back(val);
        }

        return x;
    }
};
