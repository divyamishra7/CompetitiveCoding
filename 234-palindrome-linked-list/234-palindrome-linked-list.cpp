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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* fast = head;
        ListNode* slow = head;
        if(head -> next == NULL)
            return true;
        
        while(fast->next != NULL){
            //s.push(slow->val);
            //cout<<"fast : "<<fast->val<<" slow : "<<slow->val<<endl;
            if(fast -> next -> next == NULL){
                //slow = slow -> next;
                fast = fast -> next;
                break;
            }
                
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        slow = slow -> next;
        while(slow != NULL){
            
            s.push(slow-> val);
            slow = slow -> next;
            
            
        }
        ListNode* iter = head;
        while(!s.empty()){
            if(s.top() != iter->val)
                return false;
            s.pop();
            iter = iter -> next;
        }
        return true;
    }
};