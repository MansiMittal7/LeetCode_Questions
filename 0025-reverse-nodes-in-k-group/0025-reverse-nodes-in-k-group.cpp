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
    
    int length(ListNode* head){
    ListNode* dummy=head;
    int c=0;
    while(dummy!=NULL){
        dummy=dummy->next;
        c++;
    }
    return c;
}

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //recursive approach 
        
        if(head==NULL)     //base case
            return NULL;
        
        //step1: reverse first k nodes
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count = 0 ;
        
        // if length is not greater than k return 
        if(length(head)<k)
        return head;
        
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        //step2 : recurssion 
        
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        
        //step 3 : return head of reversed list 
        
        return prev;
    }
};


// ListNode* reverseKGroup(ListNode* head, int k) {
//     if(head==NULL){
//         return NULL;
//     }
    
//     ListNode* curr=head;
//     ListNode* prev=NULL;
//     ListNode* forward=NULL;
//     int count=0;
    
//     // if length is not greater than k return 
//     if(length(head)<k){
//         return head;
//     }

//     while(curr!=NULL and count<k){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         count++;
//     }
    
//     // recursive call
//     if(forward!=NULL){
//         head->next=reverseKGroup(forward,k);
//     }
    
//     return prev;