class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n=s.size(), on=0, ze=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') on++;
            else ze++;
        }
        // cout<<on<<ze;
        string ans="";
        
        on=on-1;
        for(int i=0;i<on;i++) ans=ans+'1';
        for(int i=0;i<ze;i++) ans=ans+'0';
        ans=ans+'1';
        
        return ans;
    }
};