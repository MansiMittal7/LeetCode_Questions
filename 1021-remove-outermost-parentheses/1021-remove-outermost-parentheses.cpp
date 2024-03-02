class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int n=s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
               if(!st.empty()){
                   ans=ans+s[i]; //current bracket outermost nhi hai 
               } 
                st.push(s[i]); 
               
            }
            
            else{
                st.pop();
                if(!st.empty()){
                    ans=ans+s[i];
                }
                
            }
        }
        
        return ans;
        
    }
};



 // string ans="";
 //        int open=0, j=0;
 //        for(int i=0; i<s.size();i++){
 //            if(s[i]=='(')open++;
 //            else open--;
 //            if(open==0){
 //                ans=ans+s.substr(j+1,i-j-1);
 //                    j=i+1;
 //            }
 //        }
 //        return ans;
