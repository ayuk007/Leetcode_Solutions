class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(auto x: candies){
            if (x>maxi) maxi = x;
        }
        
        vector<bool> result_arr;
        for(int i = 0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= maxi) result_arr.push_back(true);
            else result_arr.push_back(false);
        }
        return result_arr;
    }
};