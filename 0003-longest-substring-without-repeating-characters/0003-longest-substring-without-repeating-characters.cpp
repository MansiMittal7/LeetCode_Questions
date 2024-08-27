class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //variable sliding window 
    int n=s.size();
    int i=0, j=0, ans=0;
    map<char,int> mp;
        
    //all unique char are needed so size of current window== unique char count size of map
    while(j<n){
        mp[s[j]]++;
        // if(mp.size()>j-i+1){//this conditions ccan never occur 
        //     j++;
        // }
        
        if(mp.size()==j-i+1){ //all unique chars present in map 
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1){ //repeating chars present in map  
            while(mp.size()<j-i+1){
              mp[s[i]]--;
              if(mp[s[i]]==0) mp.erase(s[i]);
              i++;
            }
            j++;
        }
    }
    return ans;
        
    }
};





// vector<int> map(256,-1);
//         int left=0, right=0;
//         int n=s.size();
//         int len=0;
//         while(right<n){
//             if(map[s[right]]!=-1) left=max(map[s[right]]+1, left);
//             map[s[right]]=right;
//             len=max(len,right-left+1);
//             right++;
//         }
//         return len;