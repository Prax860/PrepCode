class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
            vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        set<string> x;
 
        for (const string& word : words) {
            string morseword = "";
            for (char c : word) {
                morseword += morse[c - 'a'];
            }
            x.insert(morseword);
        }

        return x.size();
    }
};