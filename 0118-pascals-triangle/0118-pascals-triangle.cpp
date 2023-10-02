class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows); // Create a vector of vectors to store the triangle

        for(int i = 0; i<numRows; i++){
            r[i].resize(i+1);           // Resize the row vector to have i+1 elements
            r[i][0] = r[i][i] = 1;      // The first and last elements of each row are always 1
            for(int j = 1; j<i; j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];  // Formula for calculation of 
                                                    //element based on previous row elements
            }
        }
        return r;
    }
};