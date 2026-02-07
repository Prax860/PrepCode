class Solution {
public:
    static int minimumDeletions(string& s) {
      int n= s.size();
        int a=0, ans=0;
        for(int i=n-1; i>=0; i--){
            if (s[i]=='a') a++;
            else ans=min(ans+1,a);
        }
        return ans;
    }
};
