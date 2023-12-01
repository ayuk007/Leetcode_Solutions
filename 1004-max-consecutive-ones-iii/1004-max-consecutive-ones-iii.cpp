class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int zeros_count = 0;
        int max_ones = 0;
        
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] == 0) zeros_count++;
            while(zeros_count > k){
                if(nums[i] == 0) zeros_count--;
                i++;
            }
            
            max_ones = max(max_ones, (j - i + 1));
        }
        
        return max_ones;
    }
};