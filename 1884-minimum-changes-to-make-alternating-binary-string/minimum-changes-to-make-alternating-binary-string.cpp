class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int z0 = 0; 
        int z1 = 0;

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                if(s[i] != '0') 
                z0++;
                if(s[i] != '1') 
                z1++;
            } 
            else {
                if(s[i] != '1') 
                z0++;
                if(s[i] != '0')
                z1++;
            }
        }

        return min(z0, z1);
    }
};