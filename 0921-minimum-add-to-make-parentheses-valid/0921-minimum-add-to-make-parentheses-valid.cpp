class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(st.empty())
                    count++; //extra ) brackets ka count 
                else if(st.top()=='(')
                      st.pop();
                // else
                //     st.push(s[i]);
            }
            else if(s[i]=='(')
                st.push(s[i]);
        }
        return st.size()+count;
        //st.size - extra ( brackets ka count 
    }
};