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
 ListNode* middleNode(ListNode* head) {
        ListNode* cur = head;
        if(head != NULL){
            int count = 0;
            while(cur != NULL){
                count++;
                cur = cur->next;
            }
            cur = head;
            count = count/2;
            while(count--){
                cur = cur->next;
            }
        }
        return cur;
    
    }
};