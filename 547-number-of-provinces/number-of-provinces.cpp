class Solution {
private:
    void dfs(int node, vector<vector<int>> &adjList, vector<int> &vis) {
        vis[node] = 1;
        for (auto it : adjList[node]) {
            if (!vis[it]) {
                dfs(it, adjList, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& adj) {
        int v = adj.size();
        vector<vector<int>> adjList(v);
        
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i); 
                }
            }
        }

        vector<int> vis(v, 0);
        int ctn = 0;
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                ctn++;
                dfs(i, adjList, vis);
            }
        }
        return ctn;
    }
};
