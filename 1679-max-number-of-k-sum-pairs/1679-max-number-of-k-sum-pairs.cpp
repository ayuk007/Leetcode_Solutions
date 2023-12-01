class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int, int> hash;
        int count = 0;
        
        for(int i = 0; i<nums.size(); i++){
            int curr = nums[i];
            int rest = k - curr;
            
            if(hash[rest] > 0){
                hash[rest] = hash[rest] - 1;
                count++;
            }
            
            else{
                hash[curr] = hash[curr] + 1;
            }
        }
        return count;
    }
};