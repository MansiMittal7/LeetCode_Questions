class Solution {
public:
    string removeKdigits(string num, int k) {
        
       string res = "";
        stack<char> st;
        
        for(char ch : num)
        {
            while(!res.empty() && ch < res.back() && k > 0)
            {
                res.pop_back();
                k--;
            }
            if(!res.empty() || ch != '0') res.push_back(ch);
        }
        
        while(!res.empty() && k--)
            res.pop_back();
        
        if(res == "")
            res = "0";
        return res;
    }
};