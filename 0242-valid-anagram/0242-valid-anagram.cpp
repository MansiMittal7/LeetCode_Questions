class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[27]={0}, hash2[27]={0};
        for (int i=0; i<s.size(); i++)
            hash1[s[i]-'a']++;
        for (int i=0; i<t.size(); i++)
            hash2[t[i]-'a']++;
        bool flag=true;
        for (int i=0; i<26; i++){
            if(hash1[i]!=hash2[i]) return false;
        }
        return flag;    
    }
};