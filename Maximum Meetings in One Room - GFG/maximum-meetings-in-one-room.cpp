//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
     class meetingData{
        public : 
        int startTime;
        int endTime;
        int indexValue;
        
        meetingData(int s, int e, int i)
        {
            startTime = s;
            endTime = e;
            indexValue = i;
        }
    };
    
    
    static bool cmp(meetingData a, meetingData b)
    {
        return a.endTime < b.endTime;
        
    }
   
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        
        vector<meetingData> res;
        vector<int> ans;
        
        // Creating a vector of type meetingData to know ending and starting time at any instance
        
        for(int i=0; i<N; i++)
        {
            res.push_back(meetingData(S[i],F[i],i+1));
        }
        
        sort(res.begin(),res.end(),cmp);
        
        int endTime = -1;
        
        for(int i=0; i<N; i++)
        {
            if(res[i].startTime>endTime)
            {
                endTime = res[i].endTime;
                ans.push_back(res[i].indexValue);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends