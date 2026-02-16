class Solution {
public:
    int reverseBits(int n) {
        string x = bitset<32>(n).to_string();
        reverse(x.begin(),x.end());
        int y = (int)bitset<32>(x).to_ulong();
        return y;
    }
};