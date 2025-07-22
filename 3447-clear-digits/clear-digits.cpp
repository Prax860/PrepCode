class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;

        for (char ch : s) {
            if (isdigit(ch)) {
                if (!stk.empty()) {
                    stk.pop();
                }
            } else {
                stk.push(ch);
            }
        }
        string res;
        while (!stk.empty()) {
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
