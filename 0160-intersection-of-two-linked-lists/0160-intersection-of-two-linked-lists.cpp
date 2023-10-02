/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int val;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        ListNode *intersec = NULL;
        while(temp1!= NULL){
            temp2 = headB;
            while(temp2 != NULL){
                if(temp1 == temp2){
                    intersec = temp1;
                    break;
                }
                temp2 = temp2->next;
            }

            if(intersec!=NULL){
                break;
            }
            else{
                temp1 = temp1->next;
            }
            
        }
        return intersec;
    }
};