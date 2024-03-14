class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp; //frequency map of t
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int i=0, j=0,ans=0, n=s.size(),cnt=t.size(),minStart=0,minLen=INT_MAX;
        
        while(j<n){
            
           if ( mp[s[j]]>0 ) cnt--;
            mp[s[j]]--;
            j++;
               
           while(cnt==0){
                   if(j-i<minLen){
                       minStart=i;
                       minLen=j-i;
                   
                   }
                   mp[s[i]]++;
                   if(mp[s[i]]>0)
                       cnt++;
                       i++;        
               }

        }
        
      if(minLen==INT_MAX) return "";
      else return s.substr(minStart,minLen);
    }
};


 