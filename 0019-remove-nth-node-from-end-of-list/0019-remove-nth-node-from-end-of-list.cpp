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
       //optimised approach 
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0;i<n;++i){
                fast=fast->next;            
        }
        if (fast == nullptr){
            return head->next;
        }
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
        
    }
};
    //brute force count length of list, subtract n from it, then remove that node from list
   // tc=O(2*N) sc=O(1)
  //  if(head==NULL){
 //          return head;
//          }   
//         ListNode* temp=head;
//         int count=0;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         temp=head;
        
//         if(count==n) return head->next;
        
        
//         int pos=count-n+1; 
        
//            count=1;
//      while(count<pos-1&&temp->next!=NULL){
//          count++;
//          temp=temp->next;
//     }
//      ListNode* todelete=temp->next;
    
//      temp->next=temp->next->next;
//     delete todelete;
//     return head;
            
        