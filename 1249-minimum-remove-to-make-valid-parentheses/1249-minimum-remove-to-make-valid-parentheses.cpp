class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int> badIndices;
        stack <int> st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                 st.push(i);
            } 
            else if(s[i]==')'){
                if(st.empty()) badIndices.insert(i);
                else st.pop();
            } 
        }
        while(!st.empty()){
            badIndices.insert(st.top());
            st.pop();
        }
        for(int i=0;i<n;i++){
            if(!badIndices.contains(i))
                ans+=s[i];
        }
        return ans;
    }
};