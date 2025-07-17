class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int oldColor) {
        int n = image.size();
        int m = image[0].size();

        if (sr < 0 || sr >= n || sc < 0 || sc >= m || image[sr][sc] != oldColor)
            return;

        image[sr][sc] = color;

        // Move in all 4 directions
        dfs(image, sr + 1, sc, color, oldColor); // down
        dfs(image, sr - 1, sc, color, oldColor); // up
        dfs(image, sr, sc + 1, color, oldColor); // right
        dfs(image, sr, sc - 1, color, oldColor); // left
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor != color) {
            dfs(image, sr, sc, color, oldColor);
        }
        return image;
    }
};
