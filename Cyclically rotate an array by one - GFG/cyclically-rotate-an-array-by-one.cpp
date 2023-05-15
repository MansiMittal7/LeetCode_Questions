//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
//      vector<int> ans;
//      ans.push_back (arr[n-1]);
//   for(int i=0;i<n-1;i++ ) {
//   ans.push_back(arr[i]);
//   }
//   for(int i=0; i<ans.size(); ++i)
//   cout<<ans[i]<<" ";

// int ans[n];
// ans[0]=arr[n-1];
// for(int i=0; i<n-1; i++)
// arr[i]==ans[i+1];

// for(int i=0;i<n;i++)
// cout<<arr[i]<<" ";

for(int i=0; i<n-1; i++){
// if(i==0)
swap(arr[i],arr[n-1]);
// else
// arr[i]=arr[i-1]

    
}
// for(int i=0; i<n; ++i)
//   cout<<arr[i]<<" ";


}
