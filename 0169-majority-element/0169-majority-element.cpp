class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;   // create variable that will store grequency of element
        int el;  
        for(int i = 0; i<nums.size(); i++){
            // if count = 0, increment count by 1 and assign ele to current element 
            if(cnt==0){
                cnt = 1;
                el = nums[i];
            }
            // if ele equals current element increment count
            else if (el == nums[i]) cnt++;
            // else decrement count
            else cnt--;
        }

        // Once again checking if the frequency of ele is > n/2
        int cnt1 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == el) cnt1++;
        }
        
        if(cnt1 > (nums.size()/2)) return el;
        return -1;
        }
};