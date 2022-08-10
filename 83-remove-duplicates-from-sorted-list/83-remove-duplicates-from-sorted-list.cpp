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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        
        
        ListNode* start = head;
        ListNode* end = head -> next;
        ListNode* result = head;
        
        
        while(end != NULL){
            if((start -> val) == (end-> val)){
                start -> next = end -> next;
                end = start -> next;
            }
            else{
                end = end -> next;
                start = start -> next;
            }
        }
        
        
        return result;
    }
};