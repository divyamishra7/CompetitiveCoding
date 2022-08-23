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
        ListNode* slow = head;
        ListNode* fast = head;
        stack<int> s;
        bool moveSlow = true;
        while(fast -> next != NULL){
            s.push(slow->val);
            //cout<<slow->val<<",";
            if(fast -> next -> next == NULL){
                //cout<<"camehere"<<endl;
                moveSlow = false;
                slow = slow -> next;
                break;
            }
            
            
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        if(moveSlow == true)
            slow = slow -> next;
        //cout<<"after loop"<<slow->val;
        while(slow != NULL){
            //cout<<slow->val<<":"<<s.top();
            if(slow->val != s.top())
                return false;
            s.pop();
            slow= slow->next;
        }
        return true;
    }
};


//
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* fast = head, *slow = head;                // for finding the middle of the linked list 
//         ListNode *prev = nullptr, *next;                // for reversing the first half of the linked list
//         while(fast && fast->next) {
//             fast = fast->next->next;
//             next = slow->next;                          // reverse logic beginning
//             slow->next = prev;
//             prev = slow;
//             slow = next;                                // reverse logic ending
//         }
//         slow = fast ? slow->next : slow;                // check if slow is actually at middle or not
//         while(slow != nullptr) {
//             if(slow->val != prev->val)                  // palindrome logic
//                 return false;
//             slow = slow->next;
//             prev = prev->next;
//         }
//         return true;
//     }
// };