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
    
//    
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        
        int carry = 0;
        
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            carry=sum/10;
            
            ListNode* node = new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        
        return dummy->next;
        
    }
};

// ListNode* reverse(ListNode* head){
//         ListNode* curr=head;
//         ListNode* prev=NULL;
//         ListNode* next=NULL;
        
//         while(curr!=NULL){
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }
    
//     ListNode* add(ListNode* l1, ListNode* l2){
//         ListNode* ansHead=NULL;
//         ListNode* ansTail=NULL;
        
//         int carry=0;
        
//         while(l1!=NULL || l2!=NULL || carry!=0){
//             int sum = carry + l1->val + l2->val;
//             int digit = sum%10;
//             // ListNode* temp = new ListNode (digit);
//             insertAtTail (ansHead, ansTail , digit); 
//             carry = sum/10 ;
//             l1=l1->next;
//             l2=l2->next;
//         }
        
//         while(l1!=NULL){
//             int sum = carry + l1->val;
//              int digit = sum%10;
//             // ListNode* temp = new ListNode (digit);
//             insertAtTail (ansHead, ansTail , digit); 
//             carry = sum/10;
//             l1=l1->next;
//         }
//         while(l2!=NULL){
//             int sum = carry + l2->val;
//             int digit = sum%10;
//             // ListNode* temp = new ListNode (digit);
//             insertAtTail (ansHead, ansTail , digit); 
//             carry = sum/10;
//             l2=l2->next;
//         }
        
//         while(carry!=0){
//             int sum = carry;
//             int digit = sum%10;
//             // ListNode* temp = new ListNode (digit);
//             insertAtTail (ansHead, ansTail , digit); 
//             carry = sum/10;
//         }
        
//         return ansHead;
//     }
    
//     void insertAtTail (ListNode* &head, ListNode* &tail, int val){
//         if(head==NULL){ //empty list
//             head=temp;
//             tail=temp;
//             return;
//         }
        
//         else{ //non empty list
//             tail->next=temp;
//             tail = temp;
//         }
//     }
   
//         //reverse inout ll
//         l1 = reverse(l1);
//         l2 = reverse(l2);
        
//         //add ll  
//         ListNode* ans = add(l1,l2);
        
//         ans=reverse(ans); //reverse ans
        
//         return ans;