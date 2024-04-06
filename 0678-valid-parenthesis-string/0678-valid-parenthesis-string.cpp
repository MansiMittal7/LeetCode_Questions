class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left,star;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') left.push(i);
            else if(s[i]=='*') star.push(i);
            else{ //s[i]=) 
                if(!left.empty()) left.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(left.size()!=0){
            if(star.size()==0) return false;
            if(star.top()>left.top()){
                star.pop();
                left.pop();
            }
            else return false;
        }
        return true;
        
    }
};