class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); // Get the size of the prices array
        
        if(n <= 1) return 0; // If there are no prices or only one price, no profit can be made
        
        int minPrice = INT_MAX; // Initialize the minimum price as a very large number
        int max_Pro = 0; // Initialize the maximum profit as 0

        for(int i = 0; i < n; i++) {
            if(minPrice > prices[i]) {
                minPrice = prices[i]; // Update the minimum price if a lower price is found
            }
            max_Pro = max(max_Pro, prices[i] - minPrice); // Calculate the maximum profit
        }

        return max_Pro; // Return the maximum profit achievable
    }

};