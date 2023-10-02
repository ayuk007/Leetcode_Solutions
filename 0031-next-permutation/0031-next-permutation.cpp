class Solution {
public:

    void reverse(vector<int> &nums, int start){
        int i = start, j = nums.size() - 1;
        while(i<j){
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    void swap(vector<int> &nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        // Find out the pivot element
        while(i>=0 && nums[i] >= nums[i+1]){
            i--;
        }

        // Find just larger element from pivot element traversing backward in array
        if(i>=0){
            int j = nums.size() - 1;
            while(nums[j]<=nums[i]){
                j--;
            }
            // Swap pivot and just larger element
            swap(nums, i, j);
        }
        // Reverse array from pivot position
        reverse(nums, i+1);
    }
};