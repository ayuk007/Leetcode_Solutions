class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool is_ones = false;
        int i = 0;
        int zeros_count = 0;
        int max_length = 0;
        
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] == 1) is_ones = true;
            if(nums[j] == 0) zeros_count++;
            while(zeros_count > 1){
                if(nums[i] == 0) zeros_count--;
                i++;
            }
            
            max_length = max(max_length, (j - 1 - i + 1));
        }
        if(!is_ones) return 0;
        if(max_length == nums.size()) return nums.size() - 1;
        return max_length;
    }
};