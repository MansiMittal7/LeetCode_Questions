class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
      if(n & (n-1)) return false;
        else return true;
        
    }
};
// while(n!=1){
        // n=n/2;
        // c++;
        // }

// brute force
//   int c=0,check=1,flag=0;
//         if(n==1) return true;
//         else if(n%2!=0 && n!=1) return false;
        
//         while(n%2==0){
//             n=n/2;
//             if(n==1){
//                 flag=1;
//                 break;
//             }
//         }
        
//         if(flag==0) return false;
//         else return true;