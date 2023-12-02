class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int, int> hash1, hash2;
        
        for(auto i: nums1){
            hash1[i]++;
        }
        for(auto i: nums2){
            hash2[i]++;
        }

        vector<int> temp1;
        for(auto i: nums1){
            if(hash1[i] > 0 && hash2.count(i) == 0) temp1.push_back(i);
            hash1[i] = 0;
        }
        
        vector<int> temp2;
        for(auto i: nums2){
            if(hash2[i] > 0 && hash1.count(i) == 0) temp2.push_back(i);
            hash2[i] = 0;
        }
        
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
        
    }
};