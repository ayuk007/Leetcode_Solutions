class Solution {
public:

    void solve(vector<int> &nums, vector<vector<int>> &ans,vector<int> &ad, int idx)
    {
        ans.push_back(ad);
        for(int i = idx; i<nums.size(); i++){
        if(i > idx && nums[i]==nums[i-1]) continue;
        ad.push_back(nums[i]);
        solve(nums, ans, ad, i+1);
        ad.pop_back();
        }
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ad;
        sort(nums.begin(), nums.end());
        solve(nums, ans, ad, 0);
        return ans;
    }
};