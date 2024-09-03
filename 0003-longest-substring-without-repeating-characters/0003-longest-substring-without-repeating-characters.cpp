class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLenth = 0;
        
        unordered_set<char> charSet;
        
        int left=0;
        
        for(int right =0; right<n; right++){
          
            if(charSet.count( s[right])==0){
                charSet.insert(s[right]);
                cout<<right-left+1;
                maxLenth = max(maxLenth, right-left+1);
            } //checking for multiple resp
            else {
                while(charSet.count(s[right])){
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);
            }
            
        }
        return maxLenth;
        
    }
};