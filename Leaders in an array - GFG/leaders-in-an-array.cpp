//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int currmax=a[n-1];
        vector<int>v;
        v.push_back(a[n-1]);
      for(int i=n-2;i>=0;i--){
          if(a[i]>=currmax){
              currmax=a[i];
              v.push_back(a[i]);
          }
          
      }
      reverse(v.begin(),v.end());
      return v;
    }
};
//  vector<int> v(a, a + n);
//  sort(v.begin() + i+1, v.end());
//  if(a[i]>a[i+1]) ans.push_back(a[i]);

// TLE--
// vector<int>leaders;
       
        // for(int i=0; i<n-1; i++){
        //     int c=0;
        //     for(int j=i+1;j<n;j++){
        //         if(a[i]>a[j]) c++;
               
        //     } 
        //      if(c==(n-i-1))
        //      leaders.push_back(a[i]);
        // }
        // leaders.push_back(a[n-1]);
        
        // return leaders;
        // for(int i=0; i<n-1; i++){
        //   vector<int> v(a, a + n);
        //   sort(v.begin() + i+1, v.end());
        //   if(a[i]>a[i+1]) ans.push_back(a[i]);
        //     }  

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends