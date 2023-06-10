class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
        if(strs.size()==0) return "";
        sort(strs.begin() ,strs.end());
        string first= strs[0], last=strs[strs.size()-1];
        int n=first.size(), m=last.size();
        for(int i=0; i<n && i<m && first[i]==last[i]; i++)
          //  if(first[i]==last[i])
                ans+=first[i];
        
        return ans;
    }
};
