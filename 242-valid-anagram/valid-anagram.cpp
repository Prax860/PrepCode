class Solution {
public:
    unordered_map<char, int> hashtable(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        return freq;
    }
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> freq1 = hashtable(s);
        unordered_map<char, int> freq2 = hashtable(t);

        return freq1 == freq2;
    
    }
};