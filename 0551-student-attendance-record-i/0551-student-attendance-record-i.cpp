class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0,count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A')
                a=a+1;
            else if( (s[i]=='L') && (s[i+1]=='L') && (s[i+2]=='L') )
                l++;
        }
        
        if( (a>=2)||(l>=1) )
            return false;
        else
            return true;
        
    }
    
};