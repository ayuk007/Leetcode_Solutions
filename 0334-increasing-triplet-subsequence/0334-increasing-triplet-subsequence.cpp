class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size()<3) return false;
        
        int smallest = INT_MAX;
        int middle = INT_MAX;
        
        for(int i = 0; i<nums.size(); i++){
            
            if(nums[i]>middle) return true;
            else if(nums[i]>smallest && nums[i]<middle) middle = nums[i];
            else if(nums[i]<smallest) smallest = nums[i];
        }
        
        return false;
    }
};