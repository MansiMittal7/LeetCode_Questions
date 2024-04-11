class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n=num.size();
        stack<char>st;
        
        for(int i=0; i<n; i++){ //removing large digits before small digits
            while(!st.empty()  && k>0  &&  st.top()>num[i]){
                st.pop();
                k--;
            }
//             if(!st.empty()  && num[i] != '0') st.push(num[i]);
                st.push(num[i]);
        }
        
        //removing last k digits
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        
        string ans="";//forming string 
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        int endIndex=0;//finding index to eliminate zeros
        for(int i=ans.size()-1; i>=0;i--){
            if(ans[i]!='0'){
                endIndex=i;
                break;
            }
        }
        
        ans=ans.substr(0,endIndex+1);
        reverse(ans.begin(),ans.end());
        if(ans=="") ans="0";//edge case
        
        return ans;
    }
};




        // removing largest value from stack
//         while(!st.empty() && k--){
//             st.pop();
            
//             if(st.empty()) return 0;
//         }
        
//         //retrieving the num formed
        
//         while(!st.empty()){
//             num[n-1]=st.top();
//             st.pop();
//             n=n-1;
//         }
//         return num.substr(n);