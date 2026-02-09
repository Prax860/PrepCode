class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (auto i : operations) {
            if (i != "+" && i != "C" && i != "D") {
                s.push(stoi(i));
            }
            else if (i == "+") {
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x + y);
            }
            else if (i == "C") {
                s.pop();
            }
            else {
                s.push(2 * s.top());
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};
