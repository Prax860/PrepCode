typedef pair<int,char> p;

class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> freq;

        for(char c : s)
            freq[c]++;

        priority_queue<p> pq;

        for(auto &it : freq){
            pq.push({it.second, it.first});
        }

        string ans = "";

        while(!pq.empty()){

            int f = pq.top().first;
            char ch = pq.top().second;
            pq.pop();

            while(f--){
                ans += ch;
            }
        }

        return ans;
    }
};