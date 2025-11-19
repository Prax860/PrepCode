class Solution {
public:
    int findFinalValue(vector<int>& v, int original) {
        int x = original;
        auto it = find(v.begin(), v.end(), x);
        while(it!=v.end()){
            x *=2;
            it = find(v.begin(), v.end(), x);
        }
        return x;


    }
};