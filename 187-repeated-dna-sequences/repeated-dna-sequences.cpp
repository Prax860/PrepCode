class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>x;
        if(s.size()<10) return x;

        unordered_set<string> seen;
         unordered_set<string> repeated;

         for(int i = 0;i+9<s.size();i++){
            string sub = s.substr(i,10);
            if(seen.count(sub)){
                repeated.insert(sub);
            }
            else{
                seen.insert(sub);
            }
         }
         for(auto &i:repeated){
            x.push_back(i);
         }
         return x;
    }
};