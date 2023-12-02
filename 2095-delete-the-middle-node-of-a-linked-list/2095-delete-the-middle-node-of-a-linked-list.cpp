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
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *mid_prev;

        while(fast && fast->next){
            mid_prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }

        mid_prev->next = slow->next;
        delete slow;
        return head;
    }
};