class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90) ans.push_back(s[i]+32);
            
            else if( (s[i]>=48 && s[i]<=57) ||  (s[i]>=97 && s[i]<=122) )ans.push_back(s[i]);
            
        }
        // cout<<ans;
        
        string ans2= ans;
        reverse(ans2.begin(),ans2.end());
        
        if(ans==ans2) return true;
        else return false;
    }
};

