class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        // int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) {
                return false;
                break;
            }
            // else cnt++;
        }
        // if(cnt==s.size()) 
            return true;
    }
};

//using hash 
// int hash1[27]={0}, hash2[27]={0};
//         for (int i=0; i<s.size(); i++)
//             hash1[s[i]-'a']++;
//         for (int i=0; i<t.size(); i++)
//             hash2[t[i]-'a']++;
//         bool flag=true;
//         for (int i=0; i<26; i++){
//             if(hash1[i]!=hash2[i]) return false;
//         }
//         return flag;    