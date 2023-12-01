class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> high_alt(gain.size()+1, 0);
        
        for(int i = 1; i<=gain.size(); i++){
            high_alt[i] = high_alt[i-1] + gain[i - 1];
        }
        
        return *max_element(high_alt.begin(), high_alt.end());
    }
};