class Solution {
public:
    int maxDepth(string s) {
        
        int n=s.size();
        int ans=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                int temp=st.size();
                ans=max(ans,temp);
            }
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
            }
        }
        return ans;
    }
};