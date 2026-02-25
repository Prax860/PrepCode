#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool str(int a, int b){
        int count = 0;
        string x = bitset<16>(a).to_string();
        string y = bitset<16>(b).to_string();
        for(auto i : x){
            if(i == '1'){
                count++;
            }
        }
        for(auto i : y){
            if(i == '1'){
                count--;
            }
        }
        if(count > 0){
            return false;
        }
        if(count < 0){
            return true;  
        }
        return a < b;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), str);
        return arr;
    }
};