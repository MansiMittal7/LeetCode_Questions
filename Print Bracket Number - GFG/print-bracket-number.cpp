//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> bracketNumbers(string s)
	{
	    // Your code goes here
	    stack<pair<char,int>> st;
        int count=0,temp=0;
        vector<int> v;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
                st.push({s[i],count});
                v.push_back(count);
            }
            else if(s[i]==')')
            {
                temp=st.top().second;
                st.pop();
                v.push_back(temp);
            }
        }
        return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.bracketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends