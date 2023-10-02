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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *var = head;
        ListNode *curr = head;
        ListNode *temp = curr;
        while(n--){
            var = var->next;
        }
        if(!var){
            return head->next;
        }
        while(var->next){
            var = var->next;
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};