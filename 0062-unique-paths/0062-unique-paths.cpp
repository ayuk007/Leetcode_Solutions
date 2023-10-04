class Solution {
public:

    // bool count_paths(int i, int j, int m, int n, int &count){
    //     if(i==m-1 && j==n-1){
    //         count++;
    //         return true;
    //     }
    //     if(i==m || j==n) return false;
    //     count_paths(i+1, j, m, n, count);
    //     count_paths(i, j+1, m, n, count);
    //     return false;
    // }

    int count_paths(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i==n-1 && j==m-1) return 1;
        if(i>=m && j>=n) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        else return dp[i][j] = count_paths(i+1, j, m, n, dp) + count_paths(i, j+1, m, n, dp);
    }

    int uniquePaths(int m, int n) {
        //int count = 0;
        // vector<vector<int>> dp(m, vector<int>(n, -1));
        // int count = count_paths(0, 0, m, n, dp);
        // if(i >= m || j >= n) return 0;
        // if(i == m-1 && j == n-1) return 1;
        // return uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1); 
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;
        for(int i = 1; i<= r; i++){
            res = res * (N - r + i)/i;
        }
        return (int)res;
    }
};