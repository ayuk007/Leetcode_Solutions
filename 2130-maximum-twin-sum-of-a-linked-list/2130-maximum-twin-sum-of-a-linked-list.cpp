/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *temp = head;
        vector<int> head_vec;
        while(temp!=NULL){
            head_vec.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> twin_sum;
        for(int i = 0; i<=(head_vec.size()/2)-1;i++){
            twin_sum.push_back(head_vec[i] + head_vec[head_vec.size()-i-1]);
        }
        
    return *max_element(twin_sum.begin(), twin_sum.end());

    }
};