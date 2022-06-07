// this is solution to https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    
    int dp[47];
    
    // recursive function we make should have dp passed as argument
    int countClimbs(int n,int dp[]){
        if (dp[n]!=-1) return dp[n];
        return dp[n]=countClimbs(n-1,dp)+countClimbs(n-2,dp);
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        dp[1]=1;
        dp[2]=2;
        return countClimbs(n,dp);
    }
};