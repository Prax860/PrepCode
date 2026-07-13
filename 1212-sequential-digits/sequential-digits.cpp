class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> result;

        for (int len = 1; len <= 9; len++) {
            for (int i = 0; i + len <= 9; i++) {
                string sub = s.substr(i, len);
                int num = stoi(sub);

                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }

        return result;
    }
};