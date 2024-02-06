class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        
        for(string s:strs){ //given ko traverse karna 
            string t=s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
         
        vector<vector<string>> anagrams;
        for(auto it:mp){ //apne banaye hue map ko traverse karna 
            anagrams.push_back(it.second);
        }
        return anagrams;
    }
};