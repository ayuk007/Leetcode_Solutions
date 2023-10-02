class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Take two pointers start and end
        sort(intervals.begin(), intervals.end());

        // Edge Case: if there is only one interval
        if(intervals.size() == 1) return intervals;

        vector<vector<int>> ans;
        
        for(int i = 0; i<intervals.size(); i++){
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
        
        }
        return ans;   
    }
};