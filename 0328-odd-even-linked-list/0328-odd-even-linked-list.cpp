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
    ListNode* oddEvenList(ListNode* head) {
        
        
       //  if(!head){  //empty list
       //     return head;
       // }
       //  if(head->next==nullptr ) return head; //single element in list 
        
        if (head == nullptr)
            return head;
        
        if (head->next == nullptr)
            return head;
        
        // if (head->next->next == nullptr)
        //     return head;
        
        ListNode* odd=head;
        ListNode* even=odd->next;
        ListNode* evenStart=even;
        
        while(odd->next!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        
        odd->next=evenStart;
        
        if(odd->next==NULL){
            even->next=NULL;
        }
        
        return head;
    }
};

//tc=O(N)