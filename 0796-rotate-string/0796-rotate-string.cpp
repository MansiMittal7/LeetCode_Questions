class Solution {
public:
    bool rotateString(string s, string goal) {
        
        return s.size() == goal.size() && (s + s).find(goal) != string::npos;
        
//         int n=goal.size();
//         if(s.size()!=goal.size()) return false;
         // s+=s;
         // return s.contains(goal);
//         if((s+s).contains(goal)) return true;
//          return false;
//         int index=-1;
//         bool flag=1;
//         // int index=101,c=0,n=s.size();
//         for(int i=0; i<2*n;i++){
//             if(goal[0]==s[i]) {
//                 index=i;
//                 break;
//             }
//         }
//         int temp=n+index;        
//         if(index==-1) flag=0;
//         else{
//            for(int i=index; i<temp;i++){
//             if(s[i]!=goal[i-index]){
//                flag=0;
//                 break;
//             }
//         } 
//         }  
//         return flag;
        
    }
};