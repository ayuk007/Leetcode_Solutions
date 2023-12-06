/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void findpathsum(unordered_map<long long, long long> mpp, long long sum, int targetSum, TreeNode* root, int &count){
        if(!root) return;
        sum += root->val;
        if(mpp.find(sum - targetSum) != mpp.end()) count+=mpp[sum-targetSum];
        mpp[sum] += 1;
        findpathsum(mpp, sum, targetSum, root->left, count);
        findpathsum(mpp, sum, targetSum, root->right, count);
        
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, long long> mpp;
        mpp[0] = 1;
        int count = 0;
        findpathsum(mpp, 0, targetSum, root, count);
        return count;
    }
};