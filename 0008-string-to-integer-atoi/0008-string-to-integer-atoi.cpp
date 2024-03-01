class Solution {
// public:
//     int myAtoi(string s) {
        
//        long long int i=0 , n=s.length(),sign=1,result=0;
        
//         for(long long int i = 0; i<s.size();){
        
//         while(s[i]==' ') i++; //keep increasing i and ignoring blanck spaces

//         if( s[i]=='+'){ //checking for sign 
//             sign = 1;
//             i++;
//         }
//         else if( s[i]=='-'){
//             sign = -1;
//             i++;
//         }
        
//          while('0'<= s[i] && s[i] <= '9') 
//         {
//             result = result*10 + (s[i++]-'0');
//             if(result*sign >= INT_MAX) return INT_MAX;
//             if(result*sign <= INT_MIN) return INT_MIN;                
//         }
//         }
//         return result*sign;
//     }
    
    
    long atoi(string s, int sign, int i, long result) {
        if(sign*result>=INT_MAX){
            return INT_MAX;
        }
        if(sign*result<=INT_MIN){
            return INT_MIN;
        }
        if(i>=s.size()|| s[i]<'0' || s[i]>'9'){
            return sign*result;
        }
        
       
        result=atoi(s,sign,i+1,(result*10+(s[i]-'0')));
        
        return result;
    }

public:
    int myAtoi(string s) {
        
        int i = 0, n = s.size(), sign = 1;
        while (i < n && s[i] == ' ')
            ++i;

        if (s[i] == '-')
            sign = -1, ++i;
        else if (s[i] == '+')
            ++i;

        return atoi(s, sign, i, 0);
    }
};


