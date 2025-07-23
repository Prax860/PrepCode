class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        char first1 = 'a', second1 = 'b';
        char first2 = 'b', second2 = 'a';
        int high = x, low = y;
        if (y > x) {
            swap(first1, first2);
            swap(second1, second2);
            swap(high, low);
        }

        for (int i = 0; i < (int)s.size() - 1;) {
            if (s[i] == first1 && s[i+1] == second1) {
                score += high;
                s.erase(i, 2);
                i = max(i - 1, 0); 
            } else {
                ++i;
            }
        }

        for (int i = 0; i < (int)s.size() - 1;) {
            if (s[i] == first2 && s[i+1] == second2) {
                score += low;
                s.erase(i, 2);
                i = max(i - 1, 0);
            } else {
                ++i;
            }
        }

        return score;
    }
};