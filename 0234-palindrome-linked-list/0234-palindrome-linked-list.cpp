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
    bool isPalindrome(ListNode* head) {
        
    
         
       vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0; i<v.size()/2; i++){
            if(v[i]!=v[v.size()-1-i]){
                return false;
            }
        }
        
        return true;
    }
};

  //optimal approach- TC=O(N) tc- O(1)


//    ListNode* getMid(ListNode* head){
//       ListNode* slow=head;
// 	  ListNode* fast = head->next;
	
// 	  while(fast && fast->next){
// 	    slow = slow->next;
// 	    fast=fast->next->next;
// 	  }

// 	   return slow;
//      }
    
//      ListNode* reverse(ListNode* head){
//          ListNode* curr=head;
//          ListNode* prev=NULL;
//          ListNode* next=NULL;
         
//          while(curr!=NULL){
//              next=curr->next;
//              curr->next=prev;
//              prev=curr;
//              curr=next;
//          }
         
//          return prev;
//      }
    
 
//         if(head==NULL || head->next==NULL) return true; //it empty or single element ll
        
//         ListNode*middle= getMid (head);  //getting mid
        
//         //reversing the list after mid;
//         ListNode*temp= middle->next;
        
//         middle->next=reverse(temp); //joining reversed list after middle again
        
//         //comparing both the halves 
//         ListNode* head1=head;
//         ListNode* head2=middle->next;
        
//         while(head2!=NULL){
//             if(head1->val!=head2->val) return false;
//         }
        
//         //repeat reverse step tp make ll again same as it was given to us (opyional step)
//         temp= middle->next;
//          middle->next=reverse(temp); 
        
//          return true;




//brute force- copy the content of ll into a vector then check wether vector formed is a pallindrome or         not   TC=O(N)  SC= O(N)

//  bool checkPali(vector<int> v){
//         return checkPali(v);
//         int s=0, l=v.size()-1;
        
//         while(s<=l){
//             if(v[s]!=v[l]) return false;
            
//             s++;
//             l--;
//         }
//         return true;
//     }

// public:
//     bool isPalindrome(ListNode* head) {
        
    
         
//       vector<int> v;
//        ListNode* temp=head; 
        
//         while(temp!=NULL){
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
        
        
//        return checkPali(v);
//     }
// };
