class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=0 && count>0){
                int temp = nums[i-count];
                nums[i-count] = nums[i];
                nums[i] = temp;
            }
            else if(nums[i]==0){
                count++;
            }
        }
    }
};