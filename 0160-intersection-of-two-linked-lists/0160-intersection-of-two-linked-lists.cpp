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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //bruteforce tc=O(length of A * length of B), tracerse both and find first common whole node 
        //optimal approach 
        
        if(headA==NULL || headB==NULL ) return NULL;
        
        ListNode* a = headA;
        ListNode* b = headB;
        
        //if a and b are of different lengths we will stop the loop after second iteration 
        
        while(a!=b){
            //for the end of first iteration, we just reset the pointer to the head of another linked list 
            
            a=a==NULL? headB : a->next;
            b=b==NULL? headA : b->next;
        }
        
        return a;
    }
};