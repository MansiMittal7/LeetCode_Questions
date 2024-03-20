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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        int id=0;
        ListNode *p=nullptr, *q=nullptr, *head=list1;
        while(head!=nullptr){
            if(id==a-1) p=head;
            if(id==b+1) q=head;
            head=head->next;
            id++;
        }
        ListNode * endList2 = list2;
        while(endList2->next != nullptr){
            endList2=endList2->next;
        }
        
        p->next=list2;
        endList2->next=q;
        
        return list1;
    }
};