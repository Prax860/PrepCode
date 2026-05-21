class TrieNode {
public:
    TrieNode* child[10];
    TrieNode() {
        for(int i=0; i<10; i++) {
            child[i] = NULL;
        }
    }
};
class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(int num) {
        TrieNode* node = root;
        string numStr = to_string(num);

        for(char digit: numStr) {
            int idx = digit - '0';
            if(!node->child[idx]) {
                node->child[idx] = new TrieNode();
            }
            node = node->child[idx];
        }
    }

    int findLongestPrefix(int num) {
        TrieNode* node = root;
        string numStr = to_string(num);

        int len = 0;
        for(char digit: numStr) {
            int idx = digit - '0';

            if(node->child[idx]) {
                len++;
                node = node->child[idx];
            } else {
                break;
            }
        }

        return len;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie* trie = new Trie();

        for(int num: arr1) {
            trie->insert(num);
        }

        int ans = 0;

        for(int num: arr2) {
            int len = trie->findLongestPrefix(num);
            ans = max(ans, len);
        }

        return ans;
    }
};