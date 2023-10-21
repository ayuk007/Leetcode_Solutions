class Solution {
public:
    void solve(vector<int> candidates, vector<int> &ds, vector<vector<int>> &res, int ind, int target, int n){
        if(ind == n){
            if(target == 0){
                res.push_back(ds);
            }

            return;
        }

        
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            solve(candidates, ds, res, ind, target - candidates[ind], n);
            ds.pop_back();
        }
        solve(candidates, ds, res, ind+1, target, n);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> res;
        vector<int> ds;

        solve(candidates, ds, res, 0, target, n);
        return res;
    }
};