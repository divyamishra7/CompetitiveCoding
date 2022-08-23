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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        ListNode* result = new ListNode();
        ListNode* hold = result;
        while(head != NULL){
            if(head -> val != val){
                result -> next = new ListNode(head -> val);
                result = result -> next;
                
            }
            head = head -> next;
            
        }
        return hold -> next;
    }
};