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
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int max_level = 0;
        int max_sum = INT_MIN;
        queue<TreeNode*> helper;
        if(!root) return 0;
        helper.push(root);
        while(!helper.empty()){
            int size = helper.size();
            int sum = 0;
            level++;
            for(int i = 0; i<size; i++){
                TreeNode* node = helper.front();
                helper.pop();
                sum += node->val;
                if(node->left) helper.push(node->left);
                if(node->right) helper.push(node->right);
            }
            if(sum > max_sum){
                max_sum = sum;
                max_level = level;
            }
        }
        return max_level;
    }
};