class Solution {
    
       void helper(vector<int>&nums,int tar,vector<int>&ds,int idx,vector<vector<int>>& ans,int n){
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        for(int i = idx ; i < n ;i++){
            if(nums[i]>tar)break;
            ds.push_back(nums[i]);
            tar -= nums[i];
            helper(nums,tar,ds,i,ans,n);
            tar += nums[i];
            ds.pop_back(); 
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> currComb;
        sort(candidates.begin(),candidates.end());
        helper(candidates, target, currComb, 0, ans,candidates.size());
        return ans;
    }
};