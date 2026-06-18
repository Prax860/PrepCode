typedef pair<int,int>p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(auto &i: nums){
            freq[i]++;
        }
        priority_queue<p, vector<p>, greater<p>>pq;

        for(auto &i: freq){
            pq.push({i.second,i.first});

            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};