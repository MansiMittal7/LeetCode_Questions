class Solution {
public:
    string customSortString(string order, string s) {
      
        unordered_map<char,int> freq;
        for(auto it:s) freq[it]++;
        
        string ans="";
        
        for(auto it:order){
            while(freq[it]-- > 0) ans.push_back(it);
        }
        
        for(auto [el,fr]: freq){
            while(fr-- > 0) ans.push_back(el);
        }
        return ans;
    }
};


// auto cmp = [&](char a, char b){
//              return order.find(a)<order.find(b);
//         };
            
//         sort(s.begin(),s.end(),cmp);
//         return s;