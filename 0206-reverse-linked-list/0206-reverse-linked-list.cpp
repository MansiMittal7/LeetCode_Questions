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
    
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
         //Recursive method 
        
        if(curr==NULL){ //base case
            head=prev;
            return;
        }
        
        ListNode* forward = curr->next;
        reverse(head,forward, curr);
        curr->next=prev;
        
    }
    
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head,curr,prev);
        return head;
             
    }
};


//iterative method O(N) time complexity 
//         ListNode *newHead = NULL;
//         while(head!=NULL){
//             ListNode *next = head->next;
//             head->next = newHead;
//             newHead = head;
//             head=next;  
//         }
        
//         return newHead;