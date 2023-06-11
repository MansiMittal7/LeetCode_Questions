class Solution {
public:
    string largestOddNumber(string num) {
       long long int n=num.size(), index= 0,c=0;
       for(int i=n-1; i>=0; i--){
           if((num[i]-'0')%2!=0) return num.substr(0,i+1);
       }
        
         return "";
        
    }
};

 // g=num[n-1];
 //        string str="";
 //        for(int i=n-2; i>=0; i--){
 //            g=num[i]*(10*(n-i-1));
 //        }
 //         if(g%2!=0) str.push_back(g);
// long long int digit= (num[i]-'0');
//             if(digit%2!=0) return num.substring(0,i+1);