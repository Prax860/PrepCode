class TrieNode {
public:
    TrieNode* children[26];
    bool isTerminal;
    int childCount;
    TrieNode() {
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
    }
};
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    void insert(string word) {
        TrieNode* temp = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (temp->children[index] == NULL) {
                temp->children[index] = new TrieNode();
                temp->childCount++;
            }
            temp = temp->children[index];
        }
        temp->isTerminal = true;
    }
    string longestCommonPrefix(string first) {
        string ans = "";
        TrieNode* temp = root;
        for (char ch : first) {
            int index = ch - 'a';

            if (temp->childCount == 1 &&
                !temp->isTerminal) {

                ans += ch;
                temp = temp->children[index];
            }
            else {
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie t;
        for (string s : strs) {
            t.insert(s);
        }
        return t.longestCommonPrefix(strs[0]);
    }
};