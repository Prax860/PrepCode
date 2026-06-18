typedef pair<int,pair<int,int>> pip;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pip> pq;
        for(int i=0;i<points.size();i++){
            pq.push({pow(points[i][0],2)+pow(points[i][1],2),{points[i][0],points[i][1]}});

            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,
               pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};