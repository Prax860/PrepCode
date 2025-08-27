class Solution {
public:
    int hammingDistance(int x, int y) {
     string s = bitset<32>(x).to_string();
     string s1 = bitset<32>(y).to_string();
     int ctn = 0;
     for(int i = 0;i<s.size();i++){
        if(s[i]!=s1[i]){
            ctn++;
        }
     }
     return ctn;
    }
};