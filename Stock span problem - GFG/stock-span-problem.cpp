//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector <int> ans;
        stack< pair<int,int>> st;
        // for(auto it:price){
        for(int i=0; i<n; i++){
            int day=1;
            while (!st.empty() && st.top().first<=price[i]){
                day=day+st.top().second;
                st.pop();
            }
            
            st.push({price[i],day});
            ans.push_back(day);
        }
 
        return ans;
    }
};


//  vector <int> ans;
//       // Your code here
//       for(int i=0; i<n; i++){
//           int days=0;
           
//           for(int j=i; j>=0; j--){
//               if(price[i]>=price[j]) days++;
               
//               else break;
//           }
//           ans.push_back(days);
           
//       }
//   return ans;


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends