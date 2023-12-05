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
    
    void count_good(int &count, TreeNode* root, int maxi){
        if((!root)) return;
        if(root->val >= maxi){
            maxi = max(maxi, root->val);
            count++;
        }
        count_good(count, root->left, maxi);
        count_good(count, root->right, maxi);
        
    }
    
    int goodNodes(TreeNode* root) {
        int count = 0;
        if(!root) return count;
        count_good(count, root, root->val);
        
        return count;
    }
};