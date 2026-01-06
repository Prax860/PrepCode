class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int level = 1;
        int ansLevel = 1;
        int maxSum = INT_MIN;

        while (!q.empty()) {
            int size = q.size();   // nodes in current level
            int currSum = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();

                currSum += curr->val;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

            if (currSum > maxSum) {
                maxSum = currSum;
                ansLevel = level;
            }

            level++;
        }

        return ansLevel;
    }
};
