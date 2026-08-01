class Solution {
public:
int solveT(int  n,vector<int>&dp){
    dp[0] = 1;
    dp[1] = 1;
for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++){
        dp[i] += dp[j-1]*dp[i-j];
    }
}
    return dp[n];
}
// int solveM(int n,vector<int>&dp){
//         if(n<=1){
//             return 1;
//         }
//         if(dp[n]!=-1){
//             return dp[n];
//         }
//         int ans = 0;
//         for(int i=1;i<=n;i++){
//             ans+=solveM(i-1,dp)*solveM(n-i,dp);
//         }
//         return dp[n] = ans;
// }
    int numTrees(int n) {
        vector<int>dp(n+1,0);
        int ansd = solveT(n,dp);
        return ansd;
    }
};