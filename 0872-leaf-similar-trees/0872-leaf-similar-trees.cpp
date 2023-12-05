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
    void sequence(vector<int> &seq, TreeNode *root){
        if(!root) return;
        if((!root->right) && (!root->left)){
            seq.push_back(root->val);
            return;
        }
        sequence(seq, root->left);
        sequence(seq, root->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1, seq2;
        sequence(seq1, root1);
        sequence(seq2, root2);
        
        return seq1 == seq2;
    }
};