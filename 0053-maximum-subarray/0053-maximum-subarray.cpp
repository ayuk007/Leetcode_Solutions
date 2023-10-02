class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;          // max variable to store maximum sum
        int sum = 0;                // a sum variable 
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];           // adding current element to sum variable
            if(sum>max) max = sum;  // if sum > max, update max
            if(sum<0) sum = 0;      // if sum < 0, sum = 0 
        }
        return max;
    }
};