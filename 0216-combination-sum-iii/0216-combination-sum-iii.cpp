class Solution {
public:
    void helper(vector<vector<int>>&res,int n,int k,int idx,vector<int>&ds){
        if(k==0){
            if(n==0){
                res.push_back(ds);
            }
            return;
        }
        for(int i = idx;i<=9;i++){
            if(i>n)break;
            ds.push_back(i);
            helper(res,n-i,k-1,i+1,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>res;
        helper(res,n,k,1,ds);
        return res;
    }
};