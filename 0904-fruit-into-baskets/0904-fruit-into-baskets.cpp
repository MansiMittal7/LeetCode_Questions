class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //maximum subarray length with al most k=2 distict digits 
        
        int i=0,j=0, n=fruits.size(), ans=0,k=2;
        map<int,int> mp;
        
        while(j<n){
            mp[fruits[j]]++;
            
            if(mp.size()<=k){
                ans=max(ans, j-i+1);
                j++;
            }
            else{
                
                while(mp.size()>k){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};