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
    ListNode* deleteMiddle(ListNode* head) {
        //two pointer
//         if(!head || !head->next){
//             return NULL;
//         }
//         ListNode* p = head;
//         ListNode* q = head;
//         ListNode* r = NULL;
        
//         int c = 0;
        
//         while(p->next){
//             if(c % 2 == 0){
//                 r = q;
//                 q = q->next;
//             }
//             p = p->next;
//             c++;
//         }
//         r->next = q->next;
//         return head; 
        
        //tortoise method
    if (head->next == nullptr)
    return nullptr;
    auto slow = head, fast = head->next->next;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
        
    }
};