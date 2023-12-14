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
    
class compare{
  
 public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
    
};
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k= lists.size();
        if(k==0) return NULL;
        priority_queue<ListNode*,vector<ListNode*>, compare> minh;
        
        //step1
        
        for(int i=0; i<k;i++){
            if(lists[i]!=NULL) minh.push(lists[i]);
        }
        
        ListNode* head= NULL;
        ListNode* tail= NULL;
        
        while(minh.size()>0){
            ListNode* top= minh.top();
            minh.pop();
            
            if(top->next!=NULL){
                minh.push(top -> next);
            }
            
            if(head==NULL) {
                head=top;
                tail=top;
            }
               
                else {
                    tail->next=top;
                    tail=top;
                }
                
            
        }
        
        return head;
    }
};