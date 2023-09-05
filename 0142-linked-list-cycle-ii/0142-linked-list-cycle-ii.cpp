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
    ListNode *detectCycle(ListNode *head) {
        
        //tortoise method
        //TC- O(N) SC-O(1)
        
        if(head==NULL || head->next==NULL) return NULL; 
        //null list or list with single element 
        
        ListNode *fast= head;
        ListNode *slow= head;
        ListNode *entry= head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){    //cycle exist
                while(slow!=entry){
                slow=slow->next;
                entry=entry->next;
                }
                return entry;    
            } 
        }
        
        return NULL;
        
    }
};