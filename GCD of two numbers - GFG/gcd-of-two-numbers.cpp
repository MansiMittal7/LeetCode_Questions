//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    while(A>0 && B>0){
	        if(A>B) A=A%B;
	        else B=B%A;
	    }
	    
	    if(A==0) return B;
	    return A;
	   
	} 
};

       // int n= min(A,B);
	   // int ans=1;
	   // for(int i=n;i>=1;i--){
	   //     if(A%i==0 && B%i==0){
	   //         return i;
	   //         break;
	   //     }
	   //    // ans=i;
	   // }
	      
	   //   return ans;

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends