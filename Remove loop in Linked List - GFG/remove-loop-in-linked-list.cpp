//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

bool notOriginal(Node *head, unordered_map<Node *, int>&myMap){
    
    while(head){
        if(myMap.find(head)==myMap.end()) return true;
        if(myMap[head] != (head->data)) return true;
        
        head=head->next;
    }
}




// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
      // detect whether the loop exist

      Node* detectLoop(Node* head){
        Node* slow=head;
        Node* fast=head;
        
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            slow = slow -> next;
            fast = fast -> next->next;
             if(slow==fast)
                return slow;
             
          }
         return NULL;
    }
    
    //Find where the loop starts
    Node* getStartingNodeOfLoop(Node* head){
        Node* intersetion=detectLoop(head);
        if(intersetion == NULL)//kya pataa loop hi na ho in that case return null
            return NULL;
            
        Node* slow=head;
        while(slow != intersetion){
            slow = slow->next;
            intersetion = intersetion->next;
        }
         return slow;
    }
    
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        // Optimal approach with sc=O(1)
         // removing loop main function
    
        if(head==NULL)
            return ;
            
            Node* startNodeOfLoop= getStartingNodeOfLoop(head);
             if(startNodeOfLoop == NULL)
                return;
            
            Node* curr=startNodeOfLoop;
            while(curr->next !=startNodeOfLoop){
                curr=curr->next;
            }
            curr->next=NULL;
        
    }
};

//brute force  sc=O(n)
        // Node*temp=head;
        // Node*prev;
        
        // map<Node*,int>m;
        // while(temp!=NULL)
        // {
        //     m[temp]++;
        //     if(m[temp]==2) break;
        //     prev=temp;
        //     temp=temp->next;
        // }
        // if(temp==NULL) return ;
        // prev->next=NULL;

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<Node *, int>myMap;
        
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        myMap[head]=num;
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
            myMap[tail]=num;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n || notOriginal(head, myMap))
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends