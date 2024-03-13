class Solution {
public:
    int pivotInteger(int n) {
        vector<int> v;
        for(int i=0;i<n;i++) v.push_back(i+1);
        
        int start=0, end=n-1,bsum=v[0],esum=v[n-1],ans=-1;
        
        while(end>=start){
            
            if(bsum==esum && start==end){
                ans=start+1;
                break;
            }
            else if(bsum<esum) {
                start++;
                bsum+=v[start];
            }
                
            
            else {
                 end--;
                 esum+=v[end];
            }
                
        }
        return ans;
        
    }
};