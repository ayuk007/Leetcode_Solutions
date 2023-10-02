class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0, low = 0, high = nums.size() - 1; // Initialize pointers 
                                                        //for low, mid, and high

        while(mid <= high){ // Continue until mid is less than or equal to high
            
            if(nums[mid] == 0){ // If the element at mid is 0
                swap(nums[mid], nums[low]); // Swap element at mid with element at low
                low++; // Increment low pointer
                mid++; // Increment mid pointer
            }
            
            else if(nums[mid] == 1){ // If the element at mid is 1
                mid++; // Move mid pointer to the next element
            }
            
            else if(nums[mid] == 2){ // If the element at mid is 2
                swap(nums[mid], nums[high]); // Swap element at mid with element at high
                high--; // Decrement high pointer
            }
        }
    }
};