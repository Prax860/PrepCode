class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        string s = bitset<32>(n).to_string();
        for(auto x: s){
            if(x == '1'){
                count++;
            }
        }
        return count;
    }
};
