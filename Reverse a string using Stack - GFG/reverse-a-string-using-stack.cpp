//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    stack<char>stack;
    for(int i=0; i<len;i++){
        char c=S[i];
        stack.push(c);
    }
    // S="";
    // while(!stack.empty()){
    //     // S.push_back(stack.top());
    //     char ch= stack.top();
    //     cout<<ch;
    //      S+=ch;
    //     stack.pop();
    // }
    
    for(int i=0; i<len;i++){
        S[i]=stack.top();
        stack.pop();
    }
    
    
     return S;
    
}