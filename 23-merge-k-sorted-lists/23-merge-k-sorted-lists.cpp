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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int> q;
        
        for(int i = 0; i < lists.size(); i++){
            ListNode *temp = lists[i];
            while(temp!= NULL){
                q.push(temp->val*(-1));
                temp = temp-> next;
            }
            
        }
        ListNode*result=new ListNode(0);
        ListNode*a=result;
        while(!q.empty()){
            ListNode*temp=new ListNode(q.top()*(-1));
            q.pop();
            a->next=temp;
            a=a->next;
        }
        return result->next; 
            
            
            
        }
        
    
};
