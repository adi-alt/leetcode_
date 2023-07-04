#define ll double
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<ll>dp(target+1,0);
        dp[0] = 1;
        for(int i = 1 ; i <= target; i++){
            ll count = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j]<=i)
                count += dp[i-nums[j]];
            }
            dp[i] = count;
        }
        return (int)dp[target];
    }
};