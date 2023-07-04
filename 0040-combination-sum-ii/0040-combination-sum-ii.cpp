class Solution {
public:
    void backtrack(int ind, int target, vector<int> &ds, vector<int> &arr, vector<vector<int>> &res) {
        if(target == 0) {
            res.push_back(ds);
            return;
        }
        unordered_set<int>s;
        for(int i=ind; i<arr.size(); i++) {
            if(s.find(arr[i])!=s.end())continue;
            s.insert(arr[i]);
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            backtrack(i+1, target-arr[i], ds, arr, res);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        backtrack(0, target, ds, candidates, res);
        return res;
    }

    
};
