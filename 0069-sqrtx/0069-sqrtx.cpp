class Solution {
public:
    
    long long int binarySearch (int n){
        
        int low =0, high =n;
        long long int mid =low + ( high - mid)/2; 
        long long int ans =-1;
        
        while(low<=high){
            
            // int mid =(low + high)/2; 
            long long int square = mid*mid ;
            
           
           if(square==n) return mid;
            
           if(square<n) {
               ans = mid;
               low=mid+1;
           }
               
           
           else high = mid-1;
            
        mid =low + ( high -mid)/2;
        }
        
        return ans;
    }
    
    int mySqrt(int x) {
     return binarySearch(x);
    }
};