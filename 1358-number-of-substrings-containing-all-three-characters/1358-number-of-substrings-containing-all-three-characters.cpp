class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0 , j = 0 , n = s.size(),ans=0 ;
        unordered_map<char,int> mp;
        
        while(j<n)
        {
            mp[s[j]]++; 
            
            while(mp['a'] && mp['b'] && mp['c']) // while(window is good)
            {
                ans+= n-j;
                mp[s[i]]--; 
                i++;
            }
            j++;
        }
        return ans;
    }
};