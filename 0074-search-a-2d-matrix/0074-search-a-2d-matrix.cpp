class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int high = matrix.size()*matrix[0].size()-1;
        int low = 0;
        
        while(low<=high){
            int mid = low + (high - low)/2;
            
            int row = mid/matrix[0].size();
            int col = mid%matrix[0].size();
            
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};