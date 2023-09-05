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
    bool hasCycle(ListNode *head) {
        
   //Tortoise Method (optimal solution) 
   //TC-O(N)  SC-O(1)
        
        if(head==NULL || head->next==NULL) return false;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next !=NULL && fast->next->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast) return true;
        }
        
        return false;
        
    }
};

//brute force
//if(head==NULL || head->next==NULL) return false;
//         map <ListNode* ,bool> visited;
        
//         ListNode* temp=head;
        
//         while(temp!=NULL){
            
//             if(visited[temp]==true) return true;
            
//             else{
//                 visited[temp]=true;
//                 temp-temp->next;
//             }
//         }
        
//         return false;