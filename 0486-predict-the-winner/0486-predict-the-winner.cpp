class Solution {
    bool checkWin(int ans,int total){
	   return ans>=total-ans;
    }
    int maxScore(vector<int>&A,int total,int i,int j,vector<vector<int>>&dp){
        if(i>j) 
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
      return dp[i][j] = total-min(maxScore(A,total-A[i],i+1,j,dp),maxScore(A,total-A[j],i,j-1,dp));
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        int total=0; 
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(auto x:nums)
            total+=x;
        
        return checkWin(maxScore(nums,total,0,n-1,dp),total);
    }
};